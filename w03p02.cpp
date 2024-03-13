#include <iostream>

using namespace std;

class Klasa
{
private:
    int x;

public:
    Klasa(int x) { this->x = x; }
    void setX(int x) { this->x = x; }
    int getX() { return this->x; }
    void podaj_adres()
    {
        cout << "Moj adres to: " << this << endl;
    }
};

int main()
{
    Klasa ob1(10), ob2(20);
    ob1.podaj_adres();
    ob2.podaj_adres();
    return 0;
}