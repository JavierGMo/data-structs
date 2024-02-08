#include <iostream>
using namespace std;

class MiClase
{
    int x;

public:
    MiClase(int n) : x(n) {}
    void printX() { cout << "El valor de x es: " << x << endl; }
    void setX(int a) { x = a; }
};

struct Clase
{
    char mem1 = 'D';
    double mem2 = 12345678987654321.88888888888889;
    unsigned short mem3 = 4554;
    float mem4 = 3.14159;
    long long int mem5 = 5444333222;
    char mem6 = 'X';
    int mem7 = 434776;
    double mem8 = 2.35656778457911;
};

void pointerInClass()
{
    cout << "Poniter with classes" << endl;
    MiClase obj(15);         // Un objeto cualquiera
    MiClase *ptr_obj = &obj; // Apuntando un puntero al objeto obj

    obj.printX();      // Acceso a un miembro a través del objeto
    ptr_obj->printX(); // Accesso a un miembro a través del puntero
    ptr_obj->setX(66); // Accesso a un miembro a través del puntero
    obj.printX();      // Acceso a un miembro a través del objeto
}

void aritmeticWithPointers()
{
    cout << "Poniter with classes" << endl;
    int array[3] = {15, 35, 55};
    int *ptr = array; // No se usa el operador '&' porque los arreglos se comportan como punteros

    cout << "Direccion almacenada por ptr: " << ptr << endl;
    cout << "Valor en la direccion almacenada por ptr: " << *ptr << endl;
    cout << "Direccion almacenada por ptr + 1: " << ptr + 1 << endl;
    cout << "Valor en la direccion almacenada por ptr + 1: " << *(ptr + 1) << endl;
    cout << "Direccion almacenada por ptr + 2: " << ptr + 2 << endl;
    cout << "Valor en la direccion almacenada por ptr + 2: " << *(ptr + 2) << endl;
}

void moreAritmetic()
{
    cout << "Poniter with more aritmetic" << endl;
    struct Clase local_struct; // Estructura local de tipo struct Clase

    struct Clase *ptr_str = &local_struct; // Puntero a variables (objetos) del tipo de la estructura struct Clase

    /* Acceso a través del puntero ptr_str a los miembros de local_struct,
       mediante conversion explicita (casting) y aritmetica de punteros */

    /* 1. El puntero ptr_str que es del tipo *struct Clase
       debe convertirse a un puntero del tipo de dato al que se quiere acceder,
       por ejemplo: a un dato char, entonces se debe convertir asi (char*)ptr_str */

    /* 2. Con el operador asterisco se debe acceder al valor almacenado en la dirección
       a la que apunta el puntero ptr_str convertido: *((char*)ptr_str) */

    /* 3. Con aritmetica de punteros se puede desplazar al puntero ptr_str a traves de
       las posiciones de memoria donde se almacenan los miembros de la estructura, por
       ejemplo: *((double*)ptr_str+1) */

    cout << *((char *)ptr_str) << endl;
    cout << *((double *)ptr_str + 1) << endl;
    cout << *((short *)ptr_str + 8) << endl;
    cout << *((float *)ptr_str + 5) << endl;
    cout << *((long long int *)ptr_str + 3) << endl;
    cout << *((char *)ptr_str + 32) << endl;
    cout << *((int *)ptr_str + 9) << endl;
    cout << *((double *)ptr_str + 5) << endl;
}

int main()
{
    float var = 33.66;     // Una variable cualquiera
    float *ptr_var = &var; // Apuntando un puntero a la variable var

    // cout << "Valor de la variable var: " << var << endl;
    // cout << "Direccion de la variable var: " << &var << endl;
    // cout << "Valor de lo que hay almacenado en la direccion de memoria " << ptr_var << " : " << *ptr_var << endl;

    // // Modificando el valor a través del puntero:
    // *ptr_var = 100.25;
    // cout << "Valor de la variable var: " << var << endl;
    // pointerInClass();
    // aritmeticWithPointers();
    moreAritmetic();
    return 0;
}