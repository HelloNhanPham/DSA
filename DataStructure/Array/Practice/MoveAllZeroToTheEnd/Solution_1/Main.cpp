#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void moveAllZeroToEnd(int a[], int n)
{
	int count = 0;
	for (int i = 0; i < n; ++i)
		if (a[i] != 0)
			a[count++] = a[i];
	while (count < n)
		a[count++] = 0;
}

int main()
{
	int a[] = { 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0 };
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	moveAllZeroToEnd(a, n);
	printArray(a, n);
	return 0;
}