#include <iostream>

using namespace std;

class KlasaTestowa
{
public:
    KlasaTestowa() { cout << "Obiekt zostal utworzony" << endl; }
    ~KlasaTestowa()
    {
        cout << "Obiekt zostal usuniety z pamieci" << endl;
    }
};

int main()
{
    //KlasaTestowa k1;
    KlasaTestowa * k2 = new KlasaTestowa;
    delete k2; // teraz zadziala destruktor
    return 0;
}