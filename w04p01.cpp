#include <iostream>

using namespace std;

class Klasa
{
private:
    int x;

public:
    Klasa(int x = 0) { this->x = x; }
    void setX(int x) { this->x = x; }
    int getX() { return x; }
};

int main()
{
    Klasa x1(202);
    cout << x1.getX();
    return 0;
}