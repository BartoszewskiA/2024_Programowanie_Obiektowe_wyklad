#include <iostream>
#include <ctime>
#include <sstream>

using namespace std;

class Osoba
{
private:
    int id;
    string imie;
    string nazwisko;
    int wiek;

public:

    Osoba(string IMIE, string NAZWISKO, int WIEK) : imie(IMIE), nazwisko(NAZWISKO), wiek(WIEK)
 {}
    string toString()
    {
        stringstream bufor;
        bufor << imie << " " << nazwisko << " " << wiek;
        return bufor.str();
    }
};

int main()
{
    srand(time(NULL));
    Osoba ktos("aaaaa", "AAAAA", 30);
    cout<< ktos.toString();
    return 0;
}