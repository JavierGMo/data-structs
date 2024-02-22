#include "Node.hpp"

#ifndef STACK
#define STACK
bool isEmpty(Node *stack)
{
    return stack == NULL;
}

int size(Node *stack)
{
    if (isEmpty(stack))
    {
        return 0;
    }
    return stack->length;
}

void push(Node *&stack, int value)
{
    Node *newNode = new Node;
    newNode->value = value;
    newNode->next = stack;
    newNode->length = 1;
    /*
        newNode {
            value = value;
        }
    */
    int lenTmp = isEmpty(stack) ? 0 : stack->length;
    stack = newNode;
    std::cout << stack->length << "Before Empty stack"
              << "\n";
    stack->length += lenTmp;
    std::cout << stack->length << "Empty stack"
              << "\n";
}

void pop(Node *&stack)
{
    Node *temp = stack;
    // 1->2->3-->top/null
    if (isEmpty(stack))
    {
        return;
    }
    // 1->2-->top/null
    stack = stack->next;
    // 3-->null deleted
    if (!isEmpty(stack))
    {
        stack->length -= 1;
    }
    delete temp;
}

int peek(Node *stack)
{
    return stack->value;
}

void printStack(Node *stack)
{
    if (isEmpty(stack))
    {
        std::cout << "Empty stack"
                  << "\n";
        return;
    }
    Node *tmp = stack;
    while (tmp != NULL)
    {
        std::cout << "Valuexxxx: " << tmp->value << "\n";
        tmp = tmp->next;
    }
}

#endif