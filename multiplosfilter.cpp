#include <iostream>
using namespace std;

int main()
{
    int lenArray;
    int *arrayInteger;
    int valueForArray;
    int anotherNumber;
    string res;
    cout << "Give the len array: ";
    cin >> lenArray;
    arrayInteger = new int(lenArray);
    for (int i = 0; i < lenArray; i++)
    {
        cout << "Value for array: " << endl;
        cin >> valueForArray;
        *(arrayInteger + i) = valueForArray;
    }
    cout << "Give me another number: ";
    cin >> anotherNumber;

    for (int i = 0; i < lenArray; i++)
        res += ((*(arrayInteger + i)) % anotherNumber != 0 ? "X" : to_string(*(arrayInteger + i))) + " ";
    cout << res << endl;
    // string *a = new string();
    return 0;
}