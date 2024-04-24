#include <iostream>
#include <sstream>

using namespace std;

class Osoba
{
private:
    int ID;
    string imie;
    static int ile;

public:
    Osoba(string im) : imie(im)
    {
        ID = ++ile;
    }
    string przedstaw_sie()
    {
        stringstream s;
        s << "ID= " << ID << " Imie= " << imie;
        return s.str();
    }
    int policz_osoby() { return ile; }
    ~Osoba()
    {
        ile--;
    }
};

int Osoba::ile = 0;

int main()
{
    Osoba *k01 = new Osoba("AAAAAA");
    cout << k01->policz_osoby() << endl;
    Osoba *k02 = new Osoba("BBBBB");
    delete k02;
    cout << k01->policz_osoby() << endl;
    Osoba *k03 = new Osoba("CCCCC");
    cout << k01->policz_osoby() << endl;
    // cout << k01->przedstaw_sie() << endl;
    // cout << k02->przedstaw_sie() << endl;
    // cout << k03->przedstaw_sie() << endl;
    return 0;
}