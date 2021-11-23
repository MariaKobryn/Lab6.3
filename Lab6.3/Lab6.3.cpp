#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)

{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)

{
	for (int i = 0; i < size; i++)
		cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	cout << endl;
}

int Min(int* a, const int size)
{
	int min = a[0];
	for (int i = 1; i < size; i++)
		if (a[i] < min)
			min = a[i];
	return min;
}

int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 5;
	int a[n];
	int Low = -10;
	int High = 10;
	Create(a, n, Low, High);
	Print(a, n);
	cout << "min = " << Min(a, n) << endl;
	return 0;
}