#include <iostream>

using namespace std;

class liczba
{
private:
    int x;

public:
    liczba(int X) : x(X) {}
    int getX() { return x; }
    friend void zmienX(liczba &l1);
};
void zmienX(liczba &l1) { l1.x++; }
int main()
{
    liczba liczba01(10);
    cout<<"Przed zmiana "<<liczba01.getX()<<endl;
    zmienX(liczba01);
    cout << "Po zmianie " << liczba01.getX() << endl;
    return 0;
}