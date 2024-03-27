#include <iostream>

using namespace std;

class Klasa
{
private:
    int x;

public:
    Klasa() { x = 0; }
    Klasa(int x) { this->x = x; }
    void setX(int x) { this->x = x; }
    int getX() { return x; }
};

int main()
{
    Klasa x1;
    cout << x1.getX();
    return 0;
}