#include <iostream>
using namespace std;

int liczba = 0;
double pi = 3.14159265358979323846;
char litera = 'A';
bool prawda = true;

int x; // Deklaracja (przydzielenie pamięci, bez określenia wartości)
int y = 5; // Inicjalizacja (przydzielenie pamięci i określenie wartości)

const double PI = 3.14159265358979323846; 
#define MAX 100 

int liczba2 = 10;

char znak = 'B';

int main()
{
	int wiek;
	cout << "Podaj swoj wiek: ";
	cin >> wiek;
	cout << "Twoj wiek to: " << wiek << endl;

	if (liczba2 > 0)
	{
		cout << "Liczba jest dodatnia" << endl;
	}
	else if (liczba2 < 0)
	{
		cout << "Liczba jest ujemna" << endl;
	}
	else
	{
		cout << "Liczba jest rowna zero" << endl;
	}

	switch (znak)
	{
	case 'A':
		cout << "Znak to A" << endl;
		break;
	case 'B':
		cout << "Znak to B" << endl;
		break;
	case 'C':
		cout << "Znak to C" << endl;
		break;
	default:
		cout << "Nieznany znak" << endl;
		break;
	}

	// for
	for (int i = 0; i < 10; i++)
	{
		cout << "Iteracja " << i << endl;
	}

	// while
	int x = 0;
	while (x < 10)
	{
		cout << "x = " << x << endl;
		x++;
	}

	// do while
	int y = 0;
	do
	{
		cout << "y = " << y << endl;
		y++;
	} while (y < 10);

	if (x > 0)
	{
		cout << "Liczba jest dodatnia" << endl;
		cout << "Instrukcja złożona" << endl;
	}

	return 0;
}

