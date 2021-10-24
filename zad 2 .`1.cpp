
#include <iostream>
using namespace std;
int main()
{
	int X;
	cout << "Podaj X: ";
	cin >> X;

	int Sum = 0;
	for (int i = 1; i <= X; i++)
	
		Sum += (i * i + i) / 2;
	
	cout << "Wynik: " << Sum << endl;
}
