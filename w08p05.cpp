#include <iostream>

using namespace std;

class RGB
{
private:
    int R;
    int G;
    int B;

public:
    RGB(int r, int g, int b) : R(r), G(g), B(b) {}
    friend void wypisz(RGB kolor);
    friend void porownaj_jasnosc(RGB k1, RGB k2);
};

void wypisz(RGB kolor)
{
    cout << kolor.R << " " << kolor.G << "  " << kolor.B << endl;
}

void porownaj_jasnosc(RGB k1, RGB k2)
{
    double jasnosc_01 = (k1.R + k1.G + k1.B) / 3.0;
    double jasnosc_02 = (k2.R + k2.G + k2.B) / 3.0;
    if (jasnosc_01 > jasnosc_02)
        cout << "k1 jasniejszy k2";
    else if (jasnosc_01 == jasnosc_02)
        cout << "rowna jasnosc";
    else
        cout << "k2 jasniejszy od k1";
}

int main()
{
    RGB k1(255, 0, 0);
    RGB k2(0, 255, 0);
    porownaj_jasnosc(k1,k2);
    return 0;
}