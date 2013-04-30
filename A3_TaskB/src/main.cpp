#include <iostream>
#include <string>
#include <climits>
#include "DoublyLinkedList.hpp"

bool testDoublyLinkedListAuto()
{
    DoublyLinkedList list;
    list.push_back(5.0);
    if (list.is_empty() || list.get_head()->get_value() != 5.0) {
        return false;
    }
    if (list.is_empty() || list.get_tail()->get_value() != 5.0) {
        return false;
    }
    
    list.push_front(2.3);
    if (list.is_empty() || list.get_head()->get_value() != 2.3) {
        return false;
    }
    if (list.is_empty() || list.get_tail()->get_value() != 5.0) {
        return false;
    }
    
    list.push_back(3.7);
    list.push_front(4.2);

    if (list.is_empty() || list.get_head()->get_value() != 4.2) {
        return false;
    }
    if (list.is_empty() || list.get_tail()->get_value() != 3.7) {
        return false;
    }
    
    list.print_list();
    list.pop_front();
    list.pop_front();
    list.pop_front();
    list.pop_front();
    list.pop_front();
    list.print_list();

    list.push_back(6.66);

    if (list.is_empty() || list.get_head()->get_value() != 6.66) {
        return false;
    }
    if (list.is_empty() || list.get_tail()->get_value() != 6.66) {
        return false;
    }
    
    list.push_front(3.33);
    list.push_back(3.14);

    if (list.is_empty() || list.get_head()->get_value() != 3.33) {
        return false;
    }
    if (list.is_empty() || list.get_tail()->get_value() != 3.14) {
        return false;
    }

    list.print_list();
    
    list.pop_back();
    list.pop_back();
    list.pop_back();

    list.print_list();
    
    return true;
}

int main( int argc, const char* argv[] ) {
    if (testDoublyLinkedListAuto()) {
            std::cout << "Doubly Linked List Test passed. Congratulations!" << std::endl;            
        }
    else {
            std::cout << "Doubly Linked List Test failed!" << std::endl;
    }
    return 0;
}
