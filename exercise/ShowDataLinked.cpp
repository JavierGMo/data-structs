#include "iostream"
#include "../nodes/BasicNode.hpp"

using namespace std;

void copyNode(Node *&list, Node *toCopy)
{
    list = toCopy;
}

void showLinkedList(Node *list)
{
    if (list == NULL)
    {
        cout << "Empty linked list" << endl;
        return;
    }
    while (list != NULL)
    {
        cout << "Data = " << list->value << endl;
        list = list->next;
    }
}

void reverseLinkedList(Node *list)
{
    Node *reverseList = NULL;
    Node *copyNode = NULL;
    if (list == NULL)
    {
        cout << "Empty list" << endl;
        return;
    }
    while (list != NULL)
    {
        cout << "For reverse: " << list->value << endl;
        Node *temp = new Node;
        temp->value = list->value;
        temp->next = reverseList;
        reverseList = temp;
        list = list->next;
    }
    cout << "first valie = " << reverseList->value << endl;
    while (reverseList != NULL)
    {
        cout << "Data= " << reverseList->value << endl;
        reverseList = reverseList->next;
    }
}

void countNodes(Node *list)
{
    int count = 0;

    while (list != NULL)
    {
        count++;
        list = list->next;
    }
    cout << "Total of number of nodes = " << count << endl;
}

void insertBeginning(Node *&list)
{
    int newValue = 0;
    cout << "Input data to insert at the beginning of the list : " << endl;
    cin >> newValue;
    Node *newNode = new Node;
    newNode->value = newValue;
    newNode->next = list;
    list = newNode;
    showLinkedList(list);
}

int main(int argc, char const *argv[])
{
    Node *list = NULL;
    int numElemnts = 0;
    int value = -123;
    cout << "Cuantos elementos deseas agregar: " << endl;
    cin >> numElemnts;
    for (int i = 0; i < numElemnts; i++)
    {
        cout << "Dato para el nodo: " << endl;
        cin >> value;
        Node *newNode = createNode(value);
        push(list, newNode);
    }

    // showLinkedList(list);
    // reverseLinkedList(list);
    countNodes(list);
    return 0;
}
