#include <iostream>
#include <cmath>
#include <ctime>
#include <sstream>

const int ZYCIE = 100;
const int PUNKTY = 30;
//-------------------------------------
using namespace std;
class Cios
{
public:
    int atak_fizyczny;
    int atak_magiczny;
    bool podstepny_atak;
};

//-------------------------------------
class Postac
{
private:
    string imie;
    int zycie;
    int atak_fizyczny;
    int atak_magiczny;
    int obrona_fizyczna;
    int obrona_magiczna;
    double procentGauss(int skupienie);              // <0,1>
    double procentGauss(int minimum, int skupienie); // <minimum/100,1>

public:
    Postac(string IMIE) : imie(IMIE)
    {
        zycie = ZYCIE;
        int atak = round(procentGauss(2) * PUNKTY);
        int obrona = PUNKTY - atak;
        atak_fizyczny = round(procentGauss(2) * atak);
        atak_magiczny = atak - atak_fizyczny;
        obrona_fizyczna = round(procentGauss(2) * obrona);
        obrona_magiczna = obrona - obrona_fizyczna;
    }
    string przedstaw_sie();
    Cios zadaj_cios();
    bool przyjmij_cios(Cios c);
    bool czy_zyje()
    {
        if (zycie > 0)
            return true;
        return false;
    }
};                                         //--- koniec ciala klasy
double Postac::procentGauss(int skupienie) // <0,1>
{
    double wynik = 0.0;
    for (int i = 0; i < skupienie; i++)
        wynik += rand() % 101;
    return (wynik / skupienie) / 100.0;
}

double Postac::procentGauss(int minimum, int skupienie) // <minimum/100,1>
{
    double wynik = 0.0;
    for (int i = 0; i < skupienie; i++)
        wynik += rand() % (101 - minimum);
    return (wynik / skupienie + minimum) / 100.0;
}

string Postac::przedstaw_sie()
{
    stringstream w;
    w << "\nImie: " << imie
      << " Zycie: " << zycie << endl
      << "Atak fizyczny: " << atak_fizyczny
      << " Atak Magiczny: " << atak_magiczny << endl
      << "Obrona fizyczna: " << obrona_fizyczna
      << " Obrona magiczna: " << obrona_magiczna << endl;
    return w.str();
}

Cios Postac::zadaj_cios()
{
    Cios c;
    c.atak_fizyczny = round(atak_fizyczny * procentGauss(10, 2));
    c.atak_magiczny = round(atak_magiczny * procentGauss(10, 2));
    if ((rand() % 6 + 1) == 6)
        c.podstepny_atak = true;
    else
        c.podstepny_atak = false;
    return c;
}

bool Postac::przyjmij_cios(Cios c)
{
    int obrazenia_fizyczne = 0;
    int obrazenia_magiczne = 0;
    if (c.podstepny_atak)
    {
        obrazenia_fizyczne = c.atak_fizyczny;
        obrazenia_magiczne = c.atak_magiczny;
    }
    else
    {
        obrazenia_fizyczne = c.atak_fizyczny - round(obrona_fizyczna * procentGauss(2));
        obrazenia_magiczne = c.atak_magiczny - round(obrona_magiczna * procentGauss(2));
    }
    if (obrazenia_fizyczne < 0)
        obrazenia_fizyczne = 0;
    if (obrazenia_magiczne < 0)
        obrazenia_magiczne = 0;

    zycie = zycie - (obrazenia_fizyczne + obrazenia_magiczne);
    if (zycie > 0)
        return true;
    else
        return false;
}

//-----------------------------------------------------
void ring(Postac zawodnik_1, Postac zawodnik_2)
{
    Cios c;
    int runda = 1;
    cout << zawodnik_1.przedstaw_sie();
    cout << zawodnik_2.przedstaw_sie();

    while (zawodnik_1.czy_zyje() && zawodnik_2.czy_zyje() && ++runda < 100)
    {
        c = zawodnik_1.zadaj_cios();
        if (!zawodnik_2.przyjmij_cios(c))
            break;
        // if (!zawodnik_2.czy_zyje())
        //     break;
        c = zawodnik_2.zadaj_cios();
        zawodnik_1.przyjmij_cios(c);
    }
    cout << "\nWynik po " << runda << " rundach: " << endl;
    cout << zawodnik_1.przedstaw_sie();
    cout << zawodnik_2.przedstaw_sie();
}

//-----------------------------------------------------
int main()
{
    srand(time(NULL));
    Postac zawodnik01("Conan");
    Postac zawodnik02("Gandalf");
    ring(zawodnik01, zawodnik02);
    return 0;
}