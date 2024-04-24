#include <iostream>

using namespace std;

class Klasa
{
private:
    int x;
    static int y;

public:
    Klasa(int X) : x(X) {}
    int getX() { return x; }
    static int getY() { return y; }
};

int Klasa::y = 101;

int main()
{
    cout<< Klasa::getY();
    return 0;
}