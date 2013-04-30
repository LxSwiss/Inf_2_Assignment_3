#include <iostream>
#include <cassert>

#include "DoublyLinkedList.hpp" 

// standard constructor
DoublyLinkedList::DoublyLinkedList() :
		head(0), tail(0) {
}

DoublyLinkedListNode* DoublyLinkedList::get_head() {
	return head;
}

DoublyLinkedListNode* DoublyLinkedList::get_tail() {
	return tail;
}

// insert node at front of list
void DoublyLinkedList::push_front(double value) {
	DoublyLinkedListNode *newNode = new DoublyLinkedListNode(value); //create new node
	// head->insert_as_previous_node(newNode);
	//(head->get_prev())->insert_as_next_node(newNode);
	if(is_empty()){
		tail= newNode;
		head = newNode;
	}else{
	head->insert_as_previous_node(newNode);
	head = newNode;
	}
}

// insert node at back of list
void DoublyLinkedList::push_back(double value) {
	DoublyLinkedListNode *newNode = new DoublyLinkedListNode(value);
	if(is_empty()){
	tail = newNode;
	head = newNode;
	}else{
		tail->insert_as_next_node(newNode);
		tail=newNode;
	}

}

// delete node from front of list
void DoublyLinkedList::pop_front() {
	DoublyLinkedListNode *temp;
	temp = head;
	if (temp != NULL) {
		DoublyLinkedListNode *node;
		node = head->get_next();

		if (node != NULL) {
			node->set_prev(NULL);
		} else {
			tail = NULL;
		}
		head = node;
		delete temp;
	}

}

// delete node from back of list
void DoublyLinkedList::pop_back() {
	DoublyLinkedListNode *temp;
		temp = tail;
		if (temp != NULL) {
			DoublyLinkedListNode *node;
			node = tail->get_prev();

			if (node != NULL) {
				node->set_next(NULL);
			} else {
				head = NULL;
			}
			tail = node;
			delete temp;
		}
}

bool DoublyLinkedList::is_empty() {
	return this->get_head() == NULL && this->get_tail() == NULL;
}

void DoublyLinkedList::print_list() {
	if(!is_empty()){
	DoublyLinkedListNode *walker;
	walker = tail;
	while(walker->get_next()!=0){
		std::cout<< walker->get_value() << std::endl;
		walker = walker->get_next();
	}
	std::cout<< walker->get_value() << std::endl;
	}else{
		std::cout<<"LinkedList ist empty!"<< std::endl;
	}
}
