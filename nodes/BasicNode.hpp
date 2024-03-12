#ifndef BASIC_NODE
#define BASIC_NODE

typedef struct basicNode
{
    int value;
    int length = 0;
    basicNode *next;
} Node;

Node *createNode(int value)
{
    Node *newNode = new Node;
    (*newNode).next = NULL;
    newNode->value = value;
    return newNode;
}

/*
    Node **list -> como se para por referencia, necesitamos saber la posicion de la memoria de lista, en este caso, el primer asterisco apunta a la memoria de la lista
    *(1) -> memoria de la lista
    *(2) -> este segundo asterisco es del apuntador que la misma lista, en otras palabras, es para saber la data que tiene la lista (Node *list = NULL; pudiendo ser vacia, no siempre)

    Para el newNode es lo mismo
*/
void insert(Node **list, Node **newNode)
{
    // std::cout << "Node Value: " << (*newNode)->next << "\n"; // ejemplo para ver el valor del nodo
    (**newNode).next = *list; // primer paso, apunto al nuevo nodo ->newNode{value, *next}, donde su NEXt paunta a vacio y este tomara el valir de la lista ; ->list{value, *next}|NULL
    *list = *newNode;         // apunto a la memoria de la lista, en otras palabras, la lista entera y le asigno la memoria del newNode o el newNode entero, lo de arriba
    (*list)->length += (*list)->length;
    // std::cout << "Node Value: " << (*list)->value << "\n"; // impresion para ver como funcona
}

void push(Node *&list, Node *&newNode)
// void push(Node **list, Node **newNode)
{
    bool condition = list == NULL;
    std::cout << "is true or false" << condition << "\n";
    if (list == NULL)
    {
        std::cout << "Entre: "
                  << "\n";
        list = newNode;
        std::cout << "Pase Entre: "
                  << "\n";
        return;
    }
    Node *aux = list;
    while (aux->next != NULL)
        aux = aux->next;
    std::cout << "last: " << list->next << aux << "\n";
    aux->next = newNode;
    // (**list).next = *newNode;
    list->length += 1;
}

void insertByIndex(Node **list, Node **newNode, int index)
{
    std::cout << "me meti al index bet";
    if (list == NULL)
    {
        std::cout << "Lista vacia intente de nuevo\n";
        return;
    }
    if (index < 0 || index > (*list)->length + 1)
    {
        std::cout << "No se inserto. Elige otro index\n";
        return;
    }
    Node *aux = *list;
    int i = 0;
    while (i != index)
    {
        aux = aux->next;
        ++i;
    }
    (*newNode)->next = aux->next;
    aux->next = *newNode;
    if (index == 0)
        (*list) = *newNode;
    (*list)->length += 1;
    // *list = prevList;
}

void trySome(Node **list)
{
    (*list)->value = 900;
    std::cout << "Try some: " << (*list)->next->value;
}

void freeLinkedList(Node **list)
{
    Node *forFree = *list;
    while (*list)
    {
        *list = (*list)->next;
        delete forFree;
        forFree = *list;
    }
}

// No es paso por referencia, es paso por valor para no alterar la lista
void printLinkedList(Node *list)
{
    if (list == NULL)
    {
        std::cout << "Empty list"
                  << "\n";
        return;
    }
    while (list != NULL)
    {
        std::cout << "Valuexxxx: " << list->value << "\n";
        list = list->next;
    }
}

#endif
