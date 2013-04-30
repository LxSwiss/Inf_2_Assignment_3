#ifndef DOUBLY_LINKED_LIST_NODE_HPP
#define DOUBLY_LINKED_LIST_NODE_HPP

class DoublyLinkedListNode
{
public:
    // constructor
    DoublyLinkedListNode(double value);
    
    void set_value(double value);
    double get_value();

    DoublyLinkedListNode* get_next();
    DoublyLinkedListNode* get_prev();
    void set_next(DoublyLinkedListNode* next);
    void set_prev(DoublyLinkedListNode* prev); 
    
    void insert_as_next_node(DoublyLinkedListNode* next);
    void insert_as_previous_node(DoublyLinkedListNode* prev);

protected:
    double node_value;
    DoublyLinkedListNode* next_node; // next node in list
    DoublyLinkedListNode* previous_node; // previous node in list
};

#endif
