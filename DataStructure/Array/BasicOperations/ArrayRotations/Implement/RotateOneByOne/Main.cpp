#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void rotateLeft(int a[], int n)
{
	if (n < 2)
		return;
	int temp = a[0];
	for (int i = 0; i < n - 1; ++i)
		a[i] = a[i + 1];
	a[n - 1] = temp;
}

void rotateLeft_KTimes(int a[], int n, int k)
{
	for (int i = k; i > 0; --i)
		rotateLeft(a, n);
	cout << "Done successfully!" << endl;
}

int main()
{
	int a[] = { 1,2,3,4,5,6,7 };
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	cout << "Rotate array left 3 times" << endl;
	rotateLeft_KTimes(a, n, 3);
	printArray(a, n);
	return 0;
}