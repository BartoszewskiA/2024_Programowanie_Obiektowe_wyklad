#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

class Figura
{
protected:
    int x;
    int y;

public:
    Figura(int X, int Y) : x(X), y(Y) {}
    double getPole() { return 0; }
    double getObwod() { return 0; }
    string toString()
    {
        stringstream s;
        s << "Pozycja:" << x << ";" << y
          << " PP=" << getPole()
          << " Obw=" << getObwod();
        return s.str();
    }
};
//------------------------------------------------------------
class Prostokat : public Figura
{
protected:
    int w;
    int h;

public:
    Prostokat(int X, int Y, int W, int H) : Figura(X, Y), w(W), h(H) {}
    double getPole()
    {
        return w * h;
    }
    double getObwod()
    {
        return 2 * w + 2 * h;
    }
};
//------------------------------------------------------------
class Kolo : public Figura
{
protected:
    int d;

public:
    Kolo(int X, int Y, int D) : Figura(X, Y), d(D) {}
    double getPole()
    {
        return 3.14 * (0.5 * d) * (0.5 * d);
    }
    double getObwod()
    {
        return 3.14 * d;
    }
};
//------------------------------------------------------------
class Trojkat : public Figura
{
protected:
    int w;
    int h;

public:
    Trojkat(int X, int Y, int W, int H) : Figura(X, Y), w(W), h(H) {}
    double getPole()
    {
        return 0.5 * w * h;
    }
    double getObwod()
    {
        return sqrt((0.5 * w) * (0.5 * w) + h * h);
    }
};
//--------------------------------------------------------------
int main()
{
    Prostokat p1(20, 30, 35, 45);
    cout << p1.toString();
    return 0;
}