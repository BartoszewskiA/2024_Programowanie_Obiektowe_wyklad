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
};

int Osoba::ile = 0;

int main()
{
    Osoba ktos("aaaa");
    Osoba ktos1("bbbb");
    Osoba ktos2("cccc");
    cout << ktos.przedstaw_sie()<<endl;
    cout << ktos1.przedstaw_sie() << endl;
    cout << ktos.przedstaw_sie() << endl;
    return 0;
}