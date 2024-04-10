#include <iostream>

using namespace std;

class Bazowa
{
public:
    int x;
    Bazowa(int X): x(X)
    {
        cout << "Konstruktor klasy bazowej\n";
    }
    ~Bazowa() { cout << "destruktor klasy bazowej\n"; }
};
class Pochodna : public Bazowa
{
public:
    int y;
    Pochodna(int X, int Y) :Bazowa(X), y(Y)
    {
        cout << "Konstruktor klasy pochodnej\n";
    }
    ~Pochodna() { cout << "Destruktor klasy pochodnej\n"; }
};

int main()
{
    Pochodna ob01(10, 20);

    return 0;
}