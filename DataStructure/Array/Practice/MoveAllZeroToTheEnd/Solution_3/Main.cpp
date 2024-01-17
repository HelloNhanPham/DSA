#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void moveZeroToEnd(int a[], int n)
{
	int count = 0;
	for (int i = 0; i < n; ++i)
		if (a[i] != 0)
			a[count++] = a[i];
	while (count < n)
		a[count++] = 0;
	cout << "Done successfully!" << endl;
}

int main()
{
	int a[] = { 1,2,0,0,0,0,1,0,0,2,0 };
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	moveZeroToEnd(a, n);
	printArray(a, n);
	return 0;
}