#include <iostream>
#include <iomanip>
using namespace std;

void suma(double a, double b)
{
    double wynik = 0;
    wynik = a + b;
    cout << "Suma liczb " << a << " i " << b << " wynosi ";
    cout << setprecision(2) << wynik << endl;
}
void roznica(double a, double b)
{
    double wynik = 0;
    wynik = a - b;
    cout << "Roznica liczb " << a << " i " << b << " wynosi ";
    cout << setprecision(2) << wynik << endl;
}
void iloczyn(double a, double b)
{
    double wynik = 0;
    wynik = a * b;
    cout << "Iloczyn liczb " << a << " i " << b << " wynosi ";
    cout << setprecision(2) << wynik << endl;
}
void iloraz(double a, double b)
{
    double wynik = 0;
    wynik = a / b;
    cout << "Iloraz liczb " << a << " i " << b << " wynosi ";
    cout << setprecision(2) << wynik << endl;
}

int main()
{
    double a, b;
    cout << "Wprowadz pierwsza liczbe "; cin >> a; cout << endl;
    cout << "Wprowadz druga liczbe "; cin >> b; cout << endl;

    suma(a, b);
    roznica(a, b);
    iloczyn(a, b);
    iloraz(a, b);

    system("pause");
    return 0;
}