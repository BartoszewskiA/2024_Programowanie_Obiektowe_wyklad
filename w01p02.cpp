#include <iostream>

using namespace std;

class RGB
{
public:
    int R;
    int G;
    int B;
    void wypisz()
    {
        cout << "R=" << R << " G=" << G << " B=" << B;
    }
};

int main()
{
    RGB kolor_1;
    kolor_1.R = 10;
    kolor_1.G = 20;
    kolor_1.B = 200;
    // cout << "R=" << kolor_1.R << " G=" << kolor_1.G << " B=" << kolor_1.B;


    RGB *kolor_2 = new RGB;

    kolor_2->R = 50;
    kolor_2->G = 50;
    kolor_2->B = 50;


    kolor_1.wypisz();
    cout<<endl;
    kolor_2->wypisz();
    return 0;
}