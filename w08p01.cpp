#include <iostream>

using namespace std;

class Klasa
{
public:
    int x;
    static int y;
};

int Klasa::y = 10;

int main()
{
    Klasa p01;
    p01.x = 10;
    // p01.y = 200;

    Klasa::y = 200;
    cout << "p01  " << p01.x << "  " << p01.y << endl;

    Klasa p02;
    p02.x = 101;
    cout << "p02  " << p02.x << "  " << p02.y;
    return 0;
}