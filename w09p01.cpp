#include <iostream>

using namespace std;

class Klasa
{
private:
    int x;

public:
    Klasa() : x(0) { cout << "Zadzialal konstr. domyslny\n"; }
    Klasa(int px) : x(px) { cout << "Zadzialal konstr. z parametrem\n"; }
    Klasa(const Klasa &obj)
    {
        x = obj.x;
        cout << "zadziala konstr. kopiujacy\n";
    }
    int getX() { return x; }
};

int main()
{
    Klasa wzorzec(10);
    Klasa kopia = wzorzec;
    // Klasa kopia;
    // kopia = wzorzec;
    cout << kopia.getX();
    return 0;
}