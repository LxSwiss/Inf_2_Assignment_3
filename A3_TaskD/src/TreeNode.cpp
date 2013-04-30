/*
 Assignment 3 - Algorithms and data structures
 
 University of Zurich
 Department of Informatics
 Vizualization and Multimedia Laboratory
 
 Author: Genc Mazlami
 */


#include <iostream>
#include <string>
#include "TreeNode.h"
#include "KeyValuePair.h"


TreeNode::TreeNode(KeyValuePair element_){
    element = &element_;
    left_child = NULL;
    right_child = NULL;
}



TreeNode::TreeNode(int key_, std::string value_){
    
    KeyValuePair* tmp_element = new KeyValuePair(key_, value_);
    element = tmp_element;
    left_child = NULL;
    right_child = NULL;
}


KeyValuePair* TreeNode::getPair(){
    return element;
}


void TreeNode::setLeftChild(TreeNode* node_pointer_){
    left_child = node_pointer_;
}

void TreeNode::setRightChild(TreeNode* node_pointer_){
    right_child = node_pointer_;
}


void TreeNode::printPreOrder() {
	if (element != NULL)
		std::cout << element->getValue() << std::endl;
	if (left_child != NULL)
		left_child->printPreOrder();
	if (right_child != NULL)
		right_child->printPreOrder();
}



void TreeNode::printInOrder() {
	if (left_child != NULL)
		left_child->printInOrder();
	if (element != NULL)
		std::cout << element->getValue() << std::endl;
	if (right_child != NULL)
		right_child->printInOrder();

}

void TreeNode::printPostOrder() {
		if (left_child != NULL)
			left_child->printPostOrder();
		if (right_child != NULL)
			right_child->printPostOrder();
		if (element != NULL)
		std::cout << element->getValue() << std::endl;
}



TreeNode* TreeNode::searchKey(int key_) {
	if (key_ == element->getKey()) {
		return this;
	}
	if (key_ > element->getKey()) {
		if (right_child != NULL)
			return right_child->searchKey(key_);
	}
	if (key_ < element->getKey()) {
		if (left_child != NULL)
			return left_child->searchKey(key_);
	}
	return this;
}



void TreeNode::add(KeyValuePair* element_){
	int newKey = element_->getKey();

	TreeNode* branch = searchKey(newKey);
	int branchKey = branch->element->getKey();
	TreeNode* newNode = new TreeNode(newKey, element_->getValue());


	if(branchKey>newKey){
		branch->left_child  = newNode;
	}else if(branchKey<newKey){
		branch->right_child = newNode;
	}else{
		std::cout<< "Same Key!"<<std::endl;
	}

}

