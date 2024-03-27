#include <iostream>
#include <ctime>

using namespace std;

double procentGauss(int skupienie) // <0,1>
{
    double wynik = 0.0;
    for (int i = 0; i < skupienie; i++)
        wynik += rand() % 101;
    return (wynik / skupienie) / 100.0;
}

double procentGauss(int minimum, int skupienie) // <minimum/100,1>
{
    double wynik = 0.0;
    for (int i = 0; i < skupienie; i++)
        wynik += rand() % (101 - minimum);
    return (wynik / skupienie + minimum) / 100.0;
}

int main()
{
    srand(time(NULL));
    for (int i = 0; i < 30; i++)
    {
        cout << procentGauss(10) << "  ";
    }

    return 0;
}