#ifndef CIRCULAR_NODE
#define CIRCULAR_NODE

typedef struct basicCircularNode
{
    int value;
    int length = 0;
    basicCircularNode *next;
} CircularNode;

// Node *createNode(int value)
// {
//     Node *newNode = new Node;
//     (*newNode).next = nullptr;
//     newNode->value = value;
//     return newNode;
// }
#endif