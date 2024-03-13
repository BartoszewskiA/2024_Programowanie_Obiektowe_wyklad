#include <iostream>
#include <ctime>

using namespace std;

class Osoba
{
private:
    string imie;
    string nazwisko;

public:
    int rok_urodzenia; // pole jest publiczne na potrzeby testu.

    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    int getWiek();
    void setImie(string nImie) { imie = nImie; }
    void setNazwisko(string nNazwisko) { nazwisko = nNazwisko; }
    void setWiek(int nWiek);
};

int Osoba::getWiek()
{
    time_t czas_systemowy = time(NULL);
    tm *czas = localtime(&czas_systemowy);
    return (1900 + czas->tm_year) - rok_urodzenia;
}

void Osoba::setWiek(int nWiek)
{
    time_t czas_systemowy = time(NULL);
    tm *czas = localtime(&czas_systemowy);
    rok_urodzenia = (1900 + czas->tm_year) - nWiek;
}

int main()
{
    Osoba ktos;
    ktos.setImie("AAAAAA");
    ktos.setNazwisko("BBBBBBBB");
    ktos.setWiek(25);
    cout << endl;

    cout << "Pole w bazie: " << ktos.rok_urodzenia << endl
         << "odczytane z metody dostepowej: " << ktos.getWiek();

    // cout << ktos.getImie() << " " << ktos.getNazwisko() << " " << ktos.getWiek();
    return 0;
}