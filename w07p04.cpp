#include <iostream>
#include <ctime>

using namespace std;

class Bazowa
{
public:
    int x;
    Bazowa()
    {
        x = rand() % 100;
        cout << "Konstruktor domyslny klasy bazowej\n";
    }
    Bazowa(int X) : x(X)
    {
        cout << "Konstruktor z parametrem klasy bazowej\n";
    }
};
class Pochodna : public Bazowa
{
public:
    int y;
    Pochodna(): Bazowa()
    {
        y = rand() % 100;
        cout << "Konstruktor domyslny klasy pochodnej\n";
    }
    Pochodna(int X, int Y) : Bazowa(X), y(Y)
    {
        cout << "Konstruktor z parametrami klasy pochodnej\n";
    }
};

int main()
{
    srand(time(NULL));
    Pochodna ob01;

    return 0;
}