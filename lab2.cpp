
#include "pch.h"
#include <iostream>

using namespace std;
int main()
{

	int a;
	int b;
	cout << "Kalkulator: " << endl;
	cout << "1. Dodawanie" << endl;
	cout << "2. Odejmowanie" << endl;
	cout << "3. Mnozenie" << endl;
	cout << "4. Dzielenie" << endl;
	cout << "5. Zakoncz" << endl;
	int opcja;
	cin >> opcja;

	switch (opcja)
	{
	case 1:
		cout << "Podaj pierwsza liczbe: ";
		cin >> a;
		cout << "Podaj druga liczbe ";
		cin >> b;
		cout << "Wynik dodawania to : " << a + b << endl;

		break;
	case 2:
		cout << "Podaj pierwsza liczbe: ";
		cin >> a;
		cout << "Podaj druga liczbe ";
		cin >> b;
		cout << "Wynik odejmowania to : " << a - b << endl;
		break;
	case 3:
		cout << "Podaj pierwsza liczbe: ";
		cin >> a;
		cout << "Podaj druga liczbe ";
		cin >> b;
		cout << "Wynik mnozenia to : " << a * b << endl;
		break;
	case 4:
		
		cout << "Podaj pierwsza liczbe: ";
		cin >> a;
		cout << "Podaj druga liczbe ";
		cin >> b;
		if (b == 0)
		{
			cout << "Nie mozna dzielic przez 0 " << endl;
		}
		else
		cout << "Wynik dzielenia : " << a / b << endl;
		break;

	default:
		cout << "Wybrana opcja jest niepoprawna";
		break;
	}
	return 0;

}

