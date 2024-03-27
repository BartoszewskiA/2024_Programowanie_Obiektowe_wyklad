#include <iostream>

using namespace std;

class Test
{
public:
    Test() { cout << "Utworzono obiekt" << endl; }
    ~Test() { cout << "Usunieto obiekt" << endl; }
};
void funkcja(Test *temp);

int main()
{
    Test *t1 = new Test;     // tworzenie obiektu - dynamiczne
    funkcja(t1); // przekazywanie wskaźnika
    delete t1;
    return 0;
}

void funkcja(Test *temp)
{
}