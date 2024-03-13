#include <iostream>

using namespace std;

class Liczba
{
private:
    int x;

public:
    // Liczba(){} - konstruktor domyślny, pusty
    Liczba(int pX) { x = pX; }
    int getX() { return x; }
    void setX(int pX) { x = pX; }
};

int main()
{
    Liczba skrytka(30);
    cout << skrytka.getX();
    return 0;
}