#include <iostream>

using namespace std;

class Wektor
{
public:
    int x;
    int y;
    Wektor(int X, int Y) : x(X), y(Y) {}
};
//---------------------------------------------------------------

// Wektor dodaj(Wektor w1, Wektor w2)
// {
//     Wektor wynik(w1.x + w2.x, w1.y + w2.y);
//     return wynik;
// }

Wektor operator+(Wektor w1, Wektor w2)
{
    Wektor wynik(w1.x + w2.x, w1.y + w2.y);
    return wynik;
}

Wektor operator-(Wektor w1, Wektor w2)
{
    Wektor wynik(w1.x - w2.x, w1.y - w2.y);
    return wynik;
}

Wektor operator*(Wektor w1, int skalar)
{
    Wektor wynik(w1.x * skalar, w1.y * skalar);
    return wynik;
}

Wektor operator*(int skalar, Wektor w1)
{
    Wektor wynik(w1.x * skalar, w1.y * skalar);
    return wynik;
}

void operator+=(Wektor &w1, Wektor w2)
{
    //w1.x = w1.x + w2.x;
    w1.x += w2.x;
    w1.y += w2.y;
}

int main()
{
    Wektor w1(10, 20), w2(1, 2);
    Wektor wynik1 = w1 + w2;
    Wektor wynik12 = w2 + w1;

    Wektor wynik2 = w1 * 5;
    Wektor wynik22 = 5 * w1;

    //w1 = w1 + w2;
    w1 += w2;
    cout << w1.x << " ; " << w1.y;
    // cout << wynik2.x << " ; " << wynik2.y;

    // Wektor w = dodaj(w1, w2);
    return 0;
}