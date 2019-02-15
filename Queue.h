//
// Created by cikpechu on 2/15/2019.
//

#ifndef MYPROJECT2_QUEUE_H
#define MYPROJECT2_QUEUE_H

#include "Node.h"

template<typename Object>
class Queue {
private:
    // Declare a pointer to the Node at the last of the Queue
    Node<Object> *first;
    Node<Object> *last;

public:
    // Default Constructor
    Queue() {
        first = nullptr;
        last = nullptr;
    }

    // Deconstructor / Destructor
    // Automatically called when the object is destroyed
    ~Queue() {
        // Deallocate any remaining Nodes from heap memory
        while (last != nullptr) {
            pop();
        }
    }

    // Pass in the Object to be stored in the Queue
    void push(Object item) {
        // Put the item in a new Node
        // Make last point to the new Node
        // Have the new Node point to the old last
        Node<Object> *temp = new Node<Object>(item);
        if (last != nullptr) {
            first->setNext(*temp);
            first = temp;
        } else {
            // The Queue is currently empty. Add the first Node.
            last = temp;
            first = temp;
        }

        // TODO: Deallocate the Node's memory before the program ends
    }

    // Return the item from the last Node in the Queue
    Object pop() {
        // Handle if the Queue is empty
        if (last == nullptr) {
            // There is nothing to pop
            // TODO: refine
            return Object();
        }

        // Store the item in a temporary variable (to be returned)
        Object returnVal = last->getItem();
        // Store a pointer to the last Node in a temporary variable
        Node<Object> *temp = last;
        // Update last to point to the next Node
        last = last->getNext();
        // Deallocate the memory of the Node we are popping
        delete temp;
        // Make sure the pointer is no longer storing the stale address
        temp = nullptr;
        // Return the item that was popped off the Queue
        return returnVal;

    }

    bool finder(Object findee) {
        Node<Object> *temp = last;

        while (temp->getNext() != nullptr) {
            if (temp->getItem() == findee)
                return true;
            else
                temp = temp->getNext();
        }
    }

    bool isEmpty() {
        return (last == nullptr);
    }
};

#endif //MYPROJECT2_QUEUE_H
