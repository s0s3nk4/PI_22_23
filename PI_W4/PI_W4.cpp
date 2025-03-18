#include <iostream>
#include "funkcje.h"

using namespace std;

int suma(int, int);

int main()
{
	int wynik = suma(5, 10);
	cout << "Wynik: " << wynik << endl;
	return 0;
}

// Definicja funkcji
int suma(int a, int b)
{
	return a + b;
}

// Zwracanie wartości przez funkcję
int kwadrat(int x)
{
	return x * x;
}

// Kiedy funkcja nie zwraca wartości
void wypisz()
{
	cout << "Funkcja typu void" << endl;
}

// Przekazywanie argumentów przez wartość
void zmien(int x)
{
	x = 10;
}
int main()
{
	int x = 5;
	zmien(x);
	cout << x << endl; // x = 5
}

// Przekazywanie argumentów przez wsaźnik
void zmien(int* x)
{
	*x = 10;
}
int main()
{
	int x = 5;
	zmien(&x);
	cout << x << endl; // x = 10
}

// Przekazywanie argumentów przez referencję
void zmien_c(int& x)
{
	x = 10;
}
int main()
{
	int x = 5;
	zmien_c(x);
	cout << x << endl; // x = 10
}

// Przeładowywanie nazw funkcji
int suma(int a, int b)
{
	return a + b;
}
double suma(double a, double b)
{
	return a + b;
}
int main()
{
	cout << suma(5, 10) << endl; // 15 - wywołanie int
	cout << suma(5.5, 10.5) << endl; // 16 - wywołanie double
}

// Przykład funkcji rekurencyjnej
int silnia(int n)
{
	if (n == 0)
		return 1; // Warunek dla zakończenia rekurencji
	else
		return n * silnia(n - 1);
}
int main()
{
	cout << silnia(5) << endl; // 120
}

// Wieloplik - pliki nagłówkowe
int main()
{
	cout << suma(5, 10) << endl;
}