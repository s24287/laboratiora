// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{/*
	const string tablica[]{ "Styczen","Luty","Marzec","Kwiecien","Maj","Czerwiec","Lipiec","Sierpien","Wrzesien","Pazdziernik","listopad","Grudzien" };
	int miesiac;
	cin >> miesiac;
		cout << tablica[miesiac - 1];
		if (miesiac) {"Kwiecen", "Maj", "Czerwiec", "lipiec", "Sierpien", "Wrzesien"} << cout << " pogoda bedzie ladna " << endl;
		*/
	int month;
	cin >> month;
	/*
	cout << tablica[month - 1];
	*/

	switch (month)
	{
	case 1:
		cout << "styczen ma dni 31 i jest pochmurnie  " << endl;
		break;
	case 2:
		cout << "luty ma dni 28 i jest pochmurnie  " << endl;
		break;
	case 3:
		cout << "marzec ma dni 31 i jest pochmurnie  " << endl;
		break;
	case 4:
		cout << "kwiecien ma dni 30 i jest slonecznie " << endl;
		break;
	case 5:
		cout << "maj ma dni 31 i jest slonecznie " << endl;
		break;
	case 6:
		cout << "czerwiec ma dni 30 i jest slonecznie " << endl;
		break;
	case 7:
		cout << "lipiec ma dni 31 i jest slonecznie " << endl;
		break;
	case 8:
		cout << "sierpien ma dni 31 i jest slonecznie " << endl;
		break;
	case 9:
		cout << "wrzesien ma dni 30 i jest slonecznie " << endl;
		break;
	case 10:
		cout << "pazdziernik ma dni 31 i jest pochmurnie  " << endl;
		break;
	case 11:
		cout << "listopa ma dni 30 i jest pochmurnie  " << endl;
		break;
	case 12:
		cout << "grudzien ma dni 31 i jest pochmurnie  " << endl;
		break;
	default:
		cout << "nie prawidlowa " << endl;
		break;
	}
	return 0;
}
