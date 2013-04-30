/*
 Assignment 3 - Algorithms and data structures
 
 University of Zurich
 Department of Informatics
 Vizualization and Multimedia Laboratory
 
 Author: Genc Mazlami
 */

#include <iostream>
#include "TreeNode.h"
#include "KeyValuePair.h"

int main (int argc, const char * argv[])
{

    //Create the root node of the tree:
    
    KeyValuePair root_pair = KeyValuePair(8, "Node H");
    TreeNode root = TreeNode(root_pair);
    
    
    //add some nodes to our tree
    
    TreeNode* node_a = new TreeNode(1, "Node A");
    
    TreeNode* node_i = new TreeNode(9, "Node I");
    
    TreeNode* node_b = new TreeNode(2, "Node B");
    
    TreeNode* node_j = new TreeNode(10, "Node J");
    

    
    root.setLeftChild(node_a);
    root.setRightChild(node_i);
    
    node_a->setRightChild(node_b);
    node_i->setRightChild(node_j);
    
    //------------------------------------------
    
    
    
    
    //comment in parts of the following code to test your functions.
    


    // Test the tree traversals:
    std::cout << "-------------------" << std::endl;
    std::cout << "Inorder Traversal:" << std::endl;
    root.printInOrder();   
    std::cout << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << std::endl;

    std::cout << "-------------------" << std::endl;
    std::cout << "Preorder Traversal:" << std::endl;
    root.printPreOrder();  
    std::cout << std::endl;
    std::cout << "-------------------" << std::endl;    
    std::cout << std::endl;

    std::cout << "-------------------" << std::endl;
    std::cout << "Postorder Traversal:" << std::endl;
    root.printPostOrder();  
    std::cout << std::endl;
    std::cout << "-------------------" << std::endl;   
    std::cout << std::endl;

    //------------------------------------------
    

    // Test the searchkey function by searching for keys
    std::cout << "Searching: " << std::endl;
    std::cout << "-------------------" << std::endl;   
    TreeNode* my_node_pntr = root.searchKey(10);
    std::cout << "Search for key 10 found:  "<< my_node_pntr->getPair()->getValue() << std::endl;  //output should be Node J
    
    my_node_pntr = root.searchKey(3);
    std::cout << "Search for key 3 found: " << my_node_pntr->getPair()->getValue() << std::endl; // output should be Node B (because 3 isnt in the tree) 
    //------------------------------------------
 
    

    // Test the add method by creating new keyvaluepairs and adding them to the tree
    // and after that, print again the inorder traversal, to see if the new nodes were added
    
    std::cout << std::endl;
    KeyValuePair* my_pair_pointer = new KeyValuePair(12, "Node L");
    KeyValuePair* my_scnd_pair_pntr = new KeyValuePair(0,"Node 0");
    
    root.add(my_pair_pointer);
    root.add(my_scnd_pair_pntr);
    
    std::cout << "updated Tree in inorder traversal:" << std::endl;
    std::cout << "-------------------" << std::endl;   
    root.printInOrder();
    std::cout << "updated Tree in preorder traversal:" << std::endl;
    std::cout << "-------------------" << std::endl;
    root.printPreOrder();
    std::cout << "updated Tree in postorder traversal:" << std::endl;
    std::cout << "-------------------" << std::endl;
    root.printPostOrder();
    
    //------------------------------------------

    
    
    


    return 0;
}














