#include <iostream>
#include <sstream>

using namespace std;

class Osoba
{
private:
    string imie;
    string nazwisko;

public:
    Osoba(string IMIE, string NAZWISKO) : imie(IMIE), nazwisko(NAZWISKO) { }
    void setImie(string imie) { this->imie = imie; }
    void setNazwisko(string nazwisko) { this->nazwisko = nazwisko; }
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    string toString()
    {
        stringstream bufor;
        bufor << imie << " " << nazwisko;
        return bufor.str();
    }
    ~Osoba() { }
};

void RODO(Osoba &temp);
int main()
{
    Osoba ktos("Jan", "Kowalski");
    cout << "Przed zmiana:" << ktos.toString() << endl;
    RODO(ktos);
    cout << "Po zmianie:" << ktos.toString() << endl;

    return 0;
}

void RODO(Osoba &temp)
{
    string s = temp.getNazwisko();
    for (int i = 1; i < s.length(); i++)
        s[i] = '*';
    temp.setNazwisko(s);
}