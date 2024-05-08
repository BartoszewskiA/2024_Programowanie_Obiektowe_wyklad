#include <iostream>

using namespace std;

class Pojazd
{
private:
    string numer;
    string *opis;

public:
    Pojazd(string op, string nr) : numer(nr)
    {
        opis = new string;
        *opis = op;
    }
    Pojazd(const Pojazd &wzor)
    {
        //opis = wzor.opis; - kopiowanie płytkie
        opis = new string;
        *opis = *wzor.opis;
    }
    ~Pojazd() { delete opis; }
    string przedstaw_sie()
    {
        return "Nr: " + numer + "\nOpis: " + *opis;
    }
    void zmien_nr(string nr) { numer = nr; }
    void zmien_opis(string nowy)
    {
        *opis = nowy;
    }
};

int main()
{
    Pojazd wzorzec("Jakis samochod", "WR12345");
    Pojazd s1 = wzorzec;
    Pojazd s2 = wzorzec;
    Pojazd s3 = wzorzec;
    s1.zmien_nr("PE34567");
    s1.zmien_opis("AAAAAAAAAAAAAAAAA");
    s2.zmien_nr("DE3456");
    s2.zmien_opis("BBBBBBBBBBBBBBBBBBB");
    s3.zmien_nr("YT76544");
    s3.zmien_opis("CCCCCCCCCCCCCCCCCCC");
    cout << s1.przedstaw_sie() << endl;
    cout << s2.przedstaw_sie() << endl;
    cout << s3.przedstaw_sie() << endl;
    return 0;
}