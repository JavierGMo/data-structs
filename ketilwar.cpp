#include <iostream>
using namespace std;

int main()
{
    int ketilEstimatesK;
    int canutesSoldierM;
    int ketilSoldierN;
    cout << "N:";
    cin >> ketilSoldierN;
    cout << "M:";
    cin >> canutesSoldierM;
    cout << "K:";
    cin >> ketilEstimatesK;

    int neededSoldierForKillCanuteSoldier = ketilEstimatesK * canutesSoldierM;
    if (neededSoldierForKillCanuteSoldier > ketilSoldierN)
    {
        cout << "King Canute";
        return 0;
    }
    cout << "Iron fist Ketil";
    return 0;
}