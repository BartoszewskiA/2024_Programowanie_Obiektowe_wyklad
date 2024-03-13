#include <iostream>

using namespace std;

struct RGB {
    int R;
    int G;
    int B;
};


int main()
{
    RGB kolor_1;
    kolor_1.R = 10;
    kolor_1.G = 20;
    kolor_1.B = 200;

    RGB *kolor_2 = new RGB;

    kolor_2->R = 50;
    kolor_2->G = 50;
    kolor_2->B = 50;

    delete kolor_2;
    return 0;
}