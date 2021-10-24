#include <iostream>
using namespace std;
int main()
{
	int A, B;

	cout << "Podaj A: ";
	cin >> A;

	cout << "Podaj B: ";
	cin >> B;

	char* WierszGwiazdek = new char[A];
	memset(WierszGwiazdek, (int)'*', A);
	WierszGwiazdek[A] = 0x00;

	cout << "Wiersz o dlugosci 'a'" << endl;
	cout << WierszGwiazdek << endl << endl;

	cout << "Kolumna o dlugosci 'b'" << endl;
	for (int y = 0; y < B; y++)

		cout << '*' << endl;


	cout << endl;
	cout << "Prostokat gwiazdek o wymiarch 'a' na 'b'" << endl;

	for (int y = 0; y < B; y++)

		cout << WierszGwiazdek << endl;


	cout << endl;

	cout << "Obwod prostokatu o wymiarch 'a' na 'b'" << endl;
	for (int y = 0; y < B; y++)

		for (int x = 0; x < A; x++)

			if ((x > 0 && y > 0) && (x < A - 1 && y < B - 1))

				cout << ' ';

			else
				cout << '*';
}