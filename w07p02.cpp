#include <iostream>
#include <sstream>
using namespace std;

class Osoba
{
protected:
    string imie;
    int nr;

public:
    void setImie(string imie) { this->imie = imie; }
    string getImie() { return imie; }
    void setNr(int nr) { this->nr = nr; }
    int getNr() { return nr; }
    string przedstaw_sie()
    {
        stringstream temp;
        temp << "Imie: " << imie << " nr: " << nr;
        return temp.str();
    }
};

class Student : public Osoba
{
protected:
    int semestr;

public:
    void setSemestr(int semestr) { this->semestr = semestr; }
    int getSemestr() { return semestr; }
    string przedstaw_sie()
    {
        stringstream temp;
        temp << Osoba::przedstaw_sie() << " sem: "<<semestr;
        return temp.str();
    }
};

int main()
{
    Student ktos;
    ktos.setImie("AAAAAAA");
    ktos.setNr(1);
    ktos.setSemestr(2);
    cout << ktos.przedstaw_sie();
    return 0;
}