//
// Created by Lisa Dion on 1/22/19.
//

#ifndef MYPROJECT2_NODE_H_H
#define MYPROJECT2_NODE_H_H

/** Represents one node to be used in a linked list
    Contains data (object) and reference to next in list
*/
template<typename Object>
class Node {
private:
    Object item;
    // Store a pointer to the next Node
    Node *next;

public:
    /** Create new node with specified data
        Have it reference null
        @param newItem is data to added to new node
    */
    Node(Object newItem) {
        item = newItem;
        next = 0x0;
    }

    /** Create new node with specified data
        Have it reference nextNode
        @param newItem is data to added to new node
        @param nextNode is reference that new Node's next will hold

    */
    // Pass in the reference/address of the next Node
    Node(Object newItem, Node &nextNode) {
        item = newItem;
        // Store the memory address in the pointer
        next = &nextNode;
    }

    /** set data field (item) of Node
        @param newItem, to set item field to
    */
    void setItem(Object newItem) {
        item = newItem;
    } // end setItem

    /** get data field (item) of Node
        @return item field
    */
    Object getItem() {
        return item;
    }

    /** set next field  of Node
        @param nextNode, to set next field to
    */
    void setNext(Node &nextNode) {
        next = &nextNode;
    }

    /** get next field  Node
        @return pointer to next Node
    */
    Node* getNext() {
        return next;
    }
};
#endif //MYPROJECT2_NODE_H_H
