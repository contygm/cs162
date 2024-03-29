/********************************************************************* 
** Program name: Doubly-linked List Lab  
** Description: Declaration of linked list functions  
*********************************************************************/

#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include <iostream>

class DoublyLinkedList 
{ 

private:
    struct DLListNode {
		int val;
		DLListNode* prev;
		DLListNode* next;
		
		DLListNode(int v, DLListNode* p = nullptr, DLListNode* n = nullptr) 
        {
			val = v;
			prev = p;
			next = n;
		}
	};

    DLListNode* head;
    DLListNode* tail;

public: 
    DoublyLinkedList();
    ~DoublyLinkedList();

    // the 6 functions
    void addHead();
    void addTail();
    void deleteFirstNode();
    void deleteLastNode();
    void printReverseList();
    void printList();
    
    // extra credit functions 
    void printHeadValue();
    void printTailValue();
};


#endif