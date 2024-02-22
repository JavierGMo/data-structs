#ifndef BASIC_NODE
#define BASIC_NODE

typedef struct basicNode
{
    int value;
    int length = 0;
    basicNode *next;
} Node;

// Node *createNode(int value)
// {
//     Node *newNode = new Node;
//     (*newNode).next = nullptr;
//     newNode->value = value;
//     return newNode;
// }
#endif
