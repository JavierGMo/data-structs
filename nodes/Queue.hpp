#include "Node.hpp"
#ifndef QUEUE
#define QUEUE

bool isEmpty(Node *node)
{
    return node == NULL;
}

void enQueue(Node *&front, Node *&rear, int value)
{
    Node *newNode = new Node;
    newNode->value = value;
    if (isEmpty(front) && isEmpty(rear))
    {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
}

void deQueue(Node *&front, Node *&rear)
{
}

void peek()
{
}

#endif