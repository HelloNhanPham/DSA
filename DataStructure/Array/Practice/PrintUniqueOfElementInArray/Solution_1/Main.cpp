#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void printUnique(int a[], int n)
{
	sort(a, a + n);
	cout << "Unique of elements which create the array is: ";
	for (int i = 0; i < n - 1; ++i)
		if (a[i] < a[i + 1])
			cout << a[i] << " ";
	if (a[n - 1] != a[n - 2])
		cout << a[n - 1] << " ";
}

int main()
{
	int a[] = { 1, 3, 4, 5, 3, 2, 7, 8, 3, 6, 1, 9, 0, 2};
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	printUnique(a, n);
	return 0;
}