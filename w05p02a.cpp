#include <iostream>

using namespace std;

class Test
{
public:
    Test() { cout << "Utworzono obiekt" << endl; }
    ~Test() { cout << "Usunieto obiekt" << endl; }
};
void funkcja(Test &temp);

int main()
{
    Test t1;     // tworzenie obiektu
    funkcja(t1); // przekazywanie referencji do oryginału (adresu)
    return 0;
}

void funkcja(Test &temp)
{
}