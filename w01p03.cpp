#include <iostream>
#include <ctime>

using namespace std;

class RGB
{
private:
    int R;
    int G;
    int B;

public:
    void wypisz() { cout << "R=" << R << " G=" << G << " B=" << B; }
    void losuj()
    {
        R = rand() % 256;
        G = rand() % 256;
        B = rand() % 256;
    }
};

int main()
{
    srand(time(NULL));
    int n;
    cout << "Ile kolorow wylosowac: ";
    cin >> n;
    // int * tab = new int[n];
    RGB *tab = new RGB[n];

    for (int i = 0; i < n; i++)
{
        tab[i].losuj();
    }

    //tab[3].R = -40;

    for (int i = 0; i < n; i++)
    {
        tab[i].wypisz();
        cout << endl;
    }

    delete[] tab;
    return 0;
}