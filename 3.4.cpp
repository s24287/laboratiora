#include <iostream>
#include <iomanip>

using namespace std;

int C(int a, int b)
{
    if (b == 0 || b == a)
        return 1;
    else
        return C(a - 1, b - 1) + C(a - 1, b);
}

int main()
{
    int aMax;
    cout << "Trojkat Pascala\n---------------\naMax (0-18): ";
    cin >> aMax;
    cout << "---------------\n";
    for (int a = 0; a <= aMax; a++)
    {
        cout << setw(2) << a << setw(3 * (aMax - a)) << "";
        for (int b = 0; b <= a; b++)
            cout << setw(6) << C(a, b);
        cout << endl;
    }
    return 0;
}

