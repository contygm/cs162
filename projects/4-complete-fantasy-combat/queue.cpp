/********************************************************************* 
** Program name: Fantasy Combat Part 2  
** Description: Definition of Queue Class 
*********************************************************************/

#include "queue.hpp"
#include "validate.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Queue::Queue()
{
    head = nullptr;
}

Queue::~Queue()
{
    // only do if not empty
    if(!isEmpty())
    {
        // break circularity for easy deletion
        head->prev->next = nullptr;

        // set trash variable
        QueueNode *trash = head;

        // go through each node and delete
        while (trash != nullptr)
        {
            delete trash->type;
            trash->type = nullptr;
            delete trash;
            
            // set head to next element
            head = head->next;
            trash = head;
        }
    }
}

bool Queue::isEmpty()
{
    if (head == nullptr)
    {
        return true;
    }
    else
    {
       return false;
    }
}

void Queue::addBack(Character* type)
{
    if (isEmpty())
    {
        head = new QueueNode(type);
        //single node points to self in both directions
        head->next = head;
        head->prev = head;
	} 		
    else 
    {
        //points to last element of list cuz circular
        head->prev = new QueueNode(type, head, head->prev);
		head->prev->prev->next = head->prev;
	}
}

void Queue::removeFront()
{
    //when only 1 value, next & prev points to self
    if(head->next == head && head->prev == head) 
    {
        delete head;
        head = nullptr;
    }
    else
    {
        //head->next points to 2nd element, 2nd element is new head
        // so point 2nd element's prev to last element of queue
        head->next->prev = head->prev;

        // head->prev points to last element, 
        // so make it point to current 2nd element aka new head
        head->prev->next = head->next;
        
        //delete former head value
        QueueNode *temp = nullptr;
        temp = head;
        head = head->next; // move head to 2nd element
        delete temp;
    }
}

Character* Queue::getFront()
{
    return head->type;
}

void Queue::printQueue()
{
    if(isEmpty())
    {
        cout << "\033[1;33mList:\033[0m \nnothing to print" << endl;

    }
    else
    {
        cout << "\033[1;33mList:\033[0m" << endl;
    
        QueueNode* node = head;
        while (node->next != head) 
        {
            cout << node->type->getName() << " ";
            node = node->next;
        }
        cout << node->type->getName() << " ";
        cout << "\n" << endl;
    } 
}