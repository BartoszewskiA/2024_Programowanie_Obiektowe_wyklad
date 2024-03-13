#include <iostream>

using namespace std;

int x = 10;

class Klasa
{
public:
    int x;
    void wypisz_z_zewnatrz()
    {
        cout << x;
    }
};

int main()
{
    Klasa obiekt;
    //obiekt.x = 202;
    obiekt.wypisz_z_zewnatrz();
    return 0;
}