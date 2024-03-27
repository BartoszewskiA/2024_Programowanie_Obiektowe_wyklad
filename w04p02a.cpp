#include <iostream>
#include <ctime>

using namespace std;

class Klasa
{
private:
    int x;

public:
    Klasa() { x = rand() % 101; }
   //Klasa(int x = 0) { this->x = x; }  - błąd
    Klasa(int x) { this->x = x; }
    void setX(int x) { this->x = x; }
    int getX() { return x; }
};

int main()
{
    srand(time(NULL));
    Klasa x1;
    cout << x1.getX();
    return 0;
}