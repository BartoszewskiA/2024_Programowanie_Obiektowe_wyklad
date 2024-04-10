#include <iostream>

using namespace std;

class Klasa01 // klasa bazowa
{
protected:
    int dana;

public:
    void setDana(int dana) { this->dana = dana; }
    int getDana() { return dana; }
};

class Klasa02 : public Klasa01 // klasa pochodna
{
private:
    int dana2;

public:
    void setDana2(int dana) { this->dana2 = dana; }
    int getDana2() { return dana2; }
    int suma() {return dana + dana2;}
    int suma() { return getDana() + dana2; } // pierwsza metoda rozwiązania
};

int main()
{
    Klasa01 ob01;
    Klasa02 ob02;
    ob02.getDana();
    return 0;
}