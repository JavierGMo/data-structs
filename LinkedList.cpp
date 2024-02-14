#include "iostream"
#include "nodes/BasicNode.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Node *list = NULL;
    Node *newNode = createNode(200);
    // Paso por referencia, lista y nuevo nodo, pero puede ser en una sola funcion, esto solo es para entender mejor el programa
    insert(&list, &newNode);
	newNode = createNode(100);
    push(&list, &newNode);
    //insertByIndex(&list, &newNode, 2);
    newNode = createNode(509);
    insertByIndex(&list, &newNode, 1);
    newNode = createNode(709);
    push(&list, &newNode);
    printLinkedList(list);
    freeLinkedList(&list);
    return 0;
}
