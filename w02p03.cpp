#include <iostream>

using namespace std;

class Osoba
{
private:
    string imie;
    string nazwisko;
    int wiek;

public:
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    int getWiek() { return wiek; }
    void setImie(string nImie) { imie = nImie; }
    void setNazwisko(string nNazwisko) { nazwisko = nNazwisko; }
    void setWiek(int nWiek) { wiek = nWiek; }
};

int main()
{
    Osoba ktos;
    ktos.setImie("AAAAAA");
    ktos.setNazwisko("BBBBBBBB");
    ktos.setWiek(25);

    cout << ktos.getImie() << " " << ktos.getNazwisko() << " " << ktos.getWiek();
    return 0;
}