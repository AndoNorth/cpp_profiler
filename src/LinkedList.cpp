#include "LinkedList.h"
// single linked list
LinkedList::LinkedList() : head(nullptr), tail(nullptr) {}

LinkedList::~LinkedList()
{
    Node *current = head;
    while (current)
    {
        Node *next = current->next;
        delete current;
        current = next;
    }
}

void LinkedList::append(int data)
{
    Node *new_node = new Node(data);
    if (!head) // if head is null
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
}

void LinkedList::prepend(int data)
{
    Node *new_node = new Node(data);
    if (!head) // if head is null
    {
        head = new_node;
        tail = new_node;
        return;
    }

    new_node->next = head;
    head = new_node;
}

void LinkedList::insert(int data, int index)
{
    if (index == 0)
    {
        prepend(data);
        return;
    }

    Node *current = head;
    int current_index = 0;
    while (current->next && current_index < index - 1)
    {
        current = current->next;
        ++current_index;
    }

    Node *new_node = new Node(data);
    new_node->next = current->next;
    current->next = new_node;
    if (!new_node->next)
    {
        tail = new_node;
    }
}

void LinkedList::remove(int index)
{
    if (!head) // if head is null
    {
        return;
    }

    if (index == 0)
    {
        Node *current = head;
        head = head->next;
        delete current;
        return;
    }

    Node *current = head;
    int current_index = 0;
    while (current->next && current_index < index - 1)
    {
        current = current->next;
        ++current_index;
    }

    if (!current->next)
    {
        return;
    }

    Node *to_remove = current->next;
    current->next = to_remove->next;
    delete to_remove;
}
