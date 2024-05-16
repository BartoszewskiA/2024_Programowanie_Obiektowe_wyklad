#include <iostream>
#include <sstream>

using namespace std;

class Punkt
{
private:
    double x;
    double y;

public:
    Punkt(double X, double Y) : x(X), y(Y) {}
    double getX() { return x; }
    double getY() { return y; }
};

//--------------------------------------------------------------------

class Wektor
{
private:
    Punkt poczatek; // zagniezdzenie klas (to nie jest dziedziczenie)
    Punkt koniec;

public:
    Wektor(Punkt p, Punkt k) : poczatek(p), koniec(k) {}
    string toString()
    {
        stringstream s;
        s << "[("
          << poczatek.getX()
          << ";"
          << poczatek.getY()
          << ")("
          << koniec.getX()
          << ";"
          << koniec.getY()
          << ")] ";
        return s.str();
    }
    void przesun(double dx, double dy)
    {
        Punkt nPocz(poczatek.getX() + dx, poczatek.getY() + dy);
        Punkt nKoniec(koniec.getX() + dx, koniec.getY() + dy);
        poczatek = nPocz;
        koniec = nKoniec;
    }
};

int main()
{
    // 1 sposob
    Punkt pocz(10, 5.5);
    Punkt koniec(45, -15);
    Wektor wektor01(pocz, koniec);

    // 2 sposob
    Wektor wektor02(Punkt(10, 20), Punkt(30, 60));
    wektor02.przesun(-10,-20);
    cout << wektor02.toString();
    return 0;
}