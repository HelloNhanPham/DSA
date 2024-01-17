#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void printLeftRotation(int a[], int n, int k)
{
	cout << "Left rotation of array with k = " << k << " is: ";
	k %= n;
	for (int i = k; i < n; ++i)
		cout << a[i] << " ";
	for (int i = 0; i < k; ++i)
		cout << a[i] << " ";
	cout << endl;
}

int main()
{
	int a[] = { 1,3,5,7,9 };
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	printLeftRotation(a, n, 1);
	printLeftRotation(a, n, 3);
	printLeftRotation(a, n, 4);
	printLeftRotation(a, n, 6);
	return 0;
}