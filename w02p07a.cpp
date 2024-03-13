#include <iostream>
#include <ctime>

using namespace std;

class Liczba
{
private:
    int x;

public:
    Liczba(int pX) { x = pX; }

    int getX() { return x; }
    void setX(int pX) { x = pX; }
};

int main()
{
    srand(time(NULL));
    Liczba *tab[100];

    for (int i = 0; i < 100; i++)
    {
        tab[i] = new Liczba(rand() % 101);
    }

    for (int i = 0; i < 100; i++)
        cout << tab[i]->getX() << " ";

    for(int i=0; i<100; i++)
        delete tab[i];
    return 0;
}