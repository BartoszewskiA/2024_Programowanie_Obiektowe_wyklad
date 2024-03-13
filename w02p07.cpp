#include <iostream>
#include <ctime>

using namespace std;

class Liczba
{
private:
    int x;

public:
    Liczba() { x = rand() % 100; }

    int getX() { return x; }
    void setX(int pX) { x = pX; }
};

int main()
{
    srand(time(NULL));
    Liczba tab[100];
    for (int i = 0; i < 100; i++)
        cout << tab[i].getX() << " ";

    return 0;
}