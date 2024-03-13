#include <iostream>
#include <ctime>

using namespace std;

class Random
{
private:
    string *kolory;
    string *wartosci;

public:
    Random()
    {
        srand(time(NULL));

        kolory = new string[4];
        kolory[0] = "Kier";
        kolory[1] = "Trefl";
        kolory[2] = "Karo";
        kolory[3] = "Pik";

        wartosci = new string[13];
        wartosci[0] = "2";
        wartosci[1] = "3";
        wartosci[2] = "4";
        wartosci[3] = "5";
        wartosci[4] = "6";
        wartosci[5] = "7";
        wartosci[6] = "8";
        wartosci[7] = "9";
        wartosci[8] = "10";
        wartosci[9] = "Walet";
        wartosci[10] = "Dama";
        wartosci[11] = "Krol";
        wartosci[12] = "As";
    }
    ~Random()
    {
        delete [] kolory;
        delete [] wartosci;
    }
    
    int nextInt()
    {
        return rand();
    }
    int nextInt(int max)
    {
        return rand() % max;
    }
    int nextInt(int min, int max)
    {
        return rand() % (max - min) + min;
    }
    double nextDouble() // 0 - 0,999
    {
        return (rand() % 1000) / 1000.0;
    }

    string karta() // wylosowana katra jest odkladana do talii
    {
        int wartosc = nextInt(13);
        int kolor = nextInt(4);
        // int wartosc = this->nextInt(13);
        // int kolor = this->nextInt(4);
        string odpowiedz = "";
        odpowiedz += wartosci[wartosc];
        odpowiedz += "-";
        odpowiedz += kolory[kolor];
        return odpowiedz;
    }
};

int main()
{
    Random *random = new Random;
    // cout << random->nextInt() << endl;   // losowy int
    // cout << random->nextInt(30) << endl; // losowa liczba <0;29>
    // cout << random->nextInt(50,100)<<endl; //losowa liczba <50,99>

    // int n;
    // cout << "Ile liczb wylosowac: ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << random->nextDouble() << endl;
    // }

    int n;
    cout << "Ile kart rozdac: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << random->karta() << endl;
    }
    delete random;
    return 0;
}