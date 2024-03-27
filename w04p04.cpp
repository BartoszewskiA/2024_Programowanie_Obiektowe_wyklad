#include <iostream>

using namespace std;

class Test
{
private:
    int x;
    char znak;
    string napis;

public:
    // Test() : x(100), znak('q'), napis("napis") {}
    Test(int X = 100, char ZNAK = 'q', string NAPIS = "napis") : x(X), znak(ZNAK), napis(NAPIS) {}
    Test(int X, char ZNAK, string NAPIS) : x(X), znak(ZNAK), napis(NAPIS) {}
};

int main()
{
    Test x1();
    Test x2(20, 'a', "aaaa");
    return 0;
}