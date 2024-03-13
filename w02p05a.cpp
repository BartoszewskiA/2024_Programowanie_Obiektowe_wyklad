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
    Liczba jakas_liczba(rand() % 100);
    cout << jakas_liczba.getX();
    return 0;
}