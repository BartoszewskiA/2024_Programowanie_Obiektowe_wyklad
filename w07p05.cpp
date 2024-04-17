#include <iostream>
#include <sstream>

using namespace std;

class Punkt
{
protected:
    int x;
    int y;

public:
    Punkt(int X, int Y) : x(X), y(Y) {}
    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }
    int getX() { return x; }
    int getY() { return y; }
    string toString()
    {
        stringstream s;
        s << "(" << x << ";" << y << ")";
        return s.str();
    }
};
//------------------------------------------------------------
class Piksel : public Punkt
{
protected:
    int R;
    int G;
    int B;

public:
    Piksel(int X, int Y, int pR, int pG, int pB) : Punkt(X, Y), R(pR), G(pG), B(pB) {}
    void setKolor(int R, int G, int B)
    {
        this->R = R;
        this->G = G;
        this->B = B;
    }
    string getKolor()
    {
        stringstream s;
        s << "[R=" << R << " G=" << G << " B=" << B << "]";
        return s.str();
    }
    string toString()
    {
        stringstream s;
        // s << "(" << x << ";" << y << ") [R = " << R << " G = " << G << " B = " << B << "] ";
        s << Punkt::toString() << getKolor();
        return s.str();
    }
};
//-------------------------------------------------------------

class Piksel_3D : public Piksel
{
protected:
    int z;

public:
    Piksel_3D(int X, int Y, int Z, int pR, int pG, int pB) : Piksel(X, Y, pR, pG, pB), z(Z) {}
    void setZ(int z) { this->z = z; }
    int getZ() { return z; }
    string toString()
    {
        stringstream s;
        s << "(" << x << ";" << y << ";" << z << ") [R=" << R << " G=" << G << " B=" << B << "] ";
        return s.str();
    }
};

int main()
{
    // Punkt p1(10, 20);
    // cout << p1.toString();
    // Piksel p2(30, 40, 255, 0, 0);
    // cout << p2.toString();
    Piksel_3D p3(10, 20, 30, 0, 255, 0);
    cout << p3.toString();
    return 0;
}