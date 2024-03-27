#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

class RownanieKwadratowe
{
private:
    double a;
    double b;
    double c;
    double delta;
    double x1;
    double x2;
    void liczDelta()
    {
        delta = b * b - 4 * a * c;
    }
    void liczPierwiastki()
    {
        if (delta > 0)
        {
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
        }
        else if (delta == 0)
        {
            x1 = -b / (2 * a);
            x2 = x1;
        }
    }

public:
    RownanieKwadratowe(double A, double B, double C) : a(A), b(B), c(C), delta(0), x1(0), x2(0)
    {
        liczDelta();
        liczPierwiastki();
    }
    string toString()
    {
        stringstream odp;
        if (delta > 0)
        {
            odp << "x1=" << x1 << endl
                << "x2=" << x2 << endl;
        }
        else if (delta == 0)
        {
            odp << "x0" << x1 << endl;
        }
        else
        {
            odp << "Brak rozwizan w zbiorze liczb rzeczywistych" << endl;
        }
        return odp.str();
    }
    double getDelta() { return delta; }
    double getX1() { return x1; }
    double getX2() { return x2; }
    bool rozwiazania()
    {
        if (delta >= 0)
            return true;
        return false;
    }
    void setA(int a)
    {
        this->a = a;
        liczDelta();
        liczPierwiastki();
    }
    void setB(int b)
    {
        this->b = b;
        liczDelta();
        liczPierwiastki();
    }
    void setC(int c)
    {
        this->c = c;
        liczDelta();
        liczPierwiastki();
    }
};

int main()
{
    RownanieKwadratowe r1(3, 6, -7);
    cout << r1.toString();
    if (r1.rozwiazania())
    {
        cout << r1.getX1() << " " << r1.getX2();
    }
    return 0;
}