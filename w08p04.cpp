#include <iostream>

using namespace std;

class Stale
{
private:
    static double PI;
    static double e;

public:
    static double getPI() { return PI; }
    static double getE() { return e; }
    static double poleKola(double r) { return PI * r * r; }
};

double Stale::PI = 3.1415;
double Stale::e = 2.7182;

int main()
{
    // cout << Stale::getPI();
    int r = 10;
    double pole = Stale::poleKola(r);
    cout << pole;
    return 0;
}