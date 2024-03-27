#include <iostream>

using namespace std;

class Osoba
{
private:
    string imie;
    string nazwisko;
    int wiek;

public:
    // Osoba(string IMIE, string NAZWISKO, int WIEK)
    // {
    //     imie = IMIE;
    //     nazwisko = NAZWISKO;
    //     wiek = WIEK;
    // }

    Osoba(string IMIE, string NAZWISKO, int WIEK) : imie(IMIE), nazwisko(NAZWISKO), wiek(WIEK) {}
    
     void przedstaw_sie()
    {
        cout << imie << " " << nazwisko << " " << wiek;
    }
};

int main()
{
    Osoba ktos("aaaaa","AAAAA",30);
    ktos.przedstaw_sie();
    return 0;
}