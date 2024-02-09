#include "iostream"
#include "nodes/BasicNode.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Node *list = NULL;
    Node *newNode = createNode(90);
    cout << "New node value: " << newNode->value << endl;
    // Paso por referencia, lista y nuevo nodo, pero puede ser en una sola funcion, esto solo es para entender mejor el programa
    insert(&list, &newNode);
    cout << "List node value: " << list->value << endl;
    printLinkedList(list);
    return 0;
}
