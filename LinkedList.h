#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Driver.h"

struct LinkedListNode{
    Driver* driver;
    LinkedListNode* next;
    LinkedListNode* prev;
};

class LinkedList{
    private:
    LinkedListNode* head;
    LinkedListNode* tail;

    public:

    void insert(Driver driverData);
    void remove(Driver driverData);

};

#endif