#include <iostream>
using namespace std;

int main()
{

	// Rzutowanie jawne
	double x = 10.5;
	int y = (int)x; // y = 10

	// Rzutowanie C++
	double x = 10.5;
	int y = static_cast<int>(x); // y = 10

	// Rzutowanie wymuszone
	int a = 65;
	char b = reinterpret_cast<char&>(a); // b = 'A'

	// Wyrażenie warunkowe - działa jak skrócony if-else
	int a = 5, b = 10;
	int min = (a < b) ? a : b; // min = 5

	// Operator przecinka - kilka operacji w jednej instrukcji
	int x, y;
	x = (y = 5, y + 10); // y = 5, potem x = y + 10 -> x = 15
}
