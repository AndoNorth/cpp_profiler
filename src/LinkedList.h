#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <cstddef>

class LinkedList
{
    struct Node
    {
        int data;
        Node *next;
        Node(int data) : data(data), next(nullptr) {}
    };

    Node *head;
    Node *tail;

public:
    LinkedList();
    ~LinkedList();

    void initialize();

    void append(int data);
    void prepend(int data);
    void insert(int data, int index);
    void remove(int index);
    int get(int index) const; // TODO: implement
    size_t size() const;      // TODO: implement
};

#endif // LINKED_LIST_H