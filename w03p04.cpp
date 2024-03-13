#include <iostream>
#include <ctime>

using namespace std;

class Random
{
private:
    string kolory[4] = {"Kier", "Trefl", "Karo", "Pik"};
    string wartosci[13] = {
        "2", "3", "4", "5", "6", "7", "8", "9", "10",
        "Walet", "Dama", "Krol", "As"};

public:
    Random()
    {
        srand(time(NULL));
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