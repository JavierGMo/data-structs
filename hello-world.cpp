#include <iostream>
using namespace std;

void hola(void)
{
    cout << "Hola mundo";
}

int main()
{
    // string x;
    // cin >> x;
    // cout << x << "\n";
    int x;
    cin >> x;
    cout << x;
    // cout << "Hola mundo"
    //      << "Hola mundo dos";
    // hola();
    if (x < 10)
    {
        cout << "Es menor a 10";
        return 0;
    }
    cout << "Es mayor a 10";
    return 0;
}