#include <iostream>
#include <ctime>

using namespace std;

class Osoba
{
private:
    int id;
    string imie;
    string nazwisko;
    int wiek;
    const string kod;

public:
    // Osoba(string IMIE, string NAZWISKO, int WIEK)
    // {
    //     imie = IMIE;
    //     nazwisko = NAZWISKO;
    //     wiek = WIEK;
    // }

    Osoba(string IMIE, string NAZWISKO, int WIEK) : imie(IMIE), nazwisko(NAZWISKO), wiek(WIEK), kod("AA1")
    {
        id = rand() % 1000; 
        // id moze się powtarzac, ale to tylko przykład
        // kod = "AA1"; - nie zadziala
    }

    void przedstaw_sie()
    {
        cout << imie << " " << nazwisko << " " << wiek;
    }
};

int main()
{
    srand(time(NULL));
    Osoba ktos("aaaaa", "AAAAA", 30);
    ktos.przedstaw_sie();
    return 0;
}