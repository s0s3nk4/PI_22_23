#include <iostream>
using namespace std;

int main()
{
	int tablica[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n = sizeof(tablica) / sizeof(tablica[0]);
	int max = tablica[0];

	for (int i = 1; i < n; i++)
	{
		if (tablica[i] > max)
		{
			max = tablica[i];
		}
	}

	cout << "Najwieksza wartosc w tablicy to: " << max << endl;
	return 0;
}