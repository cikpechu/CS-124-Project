//
// Created by cikpechu on 2/15/2019.
//

#ifndef MYPROJECT2_STACK_H
#define MYPROJECT2_STACK_H
#include "Node.h"

/*
 * We want a Stack class.
 * It will use the Node class where each Node
 * points to the one below it.
 * We will keep track of where the top Node is.
 */

template<typename Object>
class Stack {
private:
    // Declare a pointer to the Node at the top of the Stack
    Node<Object> *top;

public:
    // Default Constructor
    Stack() {
        top = nullptr;
    }

    // Deconstructor / Destructor
    // Automatically called when the object is destroyed
    ~Stack() {
        // Deallocate any remaining Nodes from heap memory
        while (top != nullptr) {
            pop();
        }
    }

    // Pass in the Object to be stored in the Stack
    void push(Object item) {
        // Put the item in a new Node
        // Make top point to the new Node
        // Have the new Node point to the old top
        if (top != nullptr) {
            top = new Node<Object>(item, *top);
        } else {
            // The Stack is currently empty. Add the first Node.
            top = new Node<Object>(item);
        }
        // TODO: Deallocate the Node's memory before the program ends
    }

    // Return the item from the top Node in the Stack
    Object pop() {
        // Handle if the Stack is empty
        if (top == nullptr) {
            // There is nothing to pop
            // TODO: refine
            return Object();
        }
        // Store the item in a temporary variable (to be returned)
        Object returnVal = top->getItem();
        // Store a pointer to the top Node in a temporary variable
        Node<Object> *temp = top;
        // Update top to point to the next Node
        top = top->getNext();
        // Deallocate the memory of the Node we are popping
        delete temp;
        // Make sure the pointer is no longer storing the stale address
        temp = nullptr;
        // Return the item that was popped off the Stack
        return returnVal;
    }

    bool finder(Object findee) {
        Node<Object> *temp = top;

        while (temp->getNext() != nullptr) {
            if (temp->getItem() == findee)
                return true;
            else
                temp = temp->getNext();
        }
    }

    bool isEmpty() {
        return (top == nullptr);
    }

};

#endif //MYPROJECT2_STACK_H
