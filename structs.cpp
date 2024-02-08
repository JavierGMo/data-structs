#include <iostream>
using namespace std;

struct noAlias
{
    int someValue;
};

typedef struct // alias for struct, no name, kinda anonymous struct :S
{
    int value;
} AnonymousAlias;

typedef struct noAlias WithAlias; // yeah, Now it has a alias :D
int main()
{
    WithAlias k;
    k.someValue = 102;
    cout << "some value in no alias with alias: " << k.someValue;
    return 0;
}