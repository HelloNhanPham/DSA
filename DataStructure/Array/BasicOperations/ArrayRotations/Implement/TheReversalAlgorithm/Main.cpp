#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void reverseArray(int a[], int start, int end)
{z
	int mid = ((end - start) + 1) / 2;
	for (int i = start; i < start + mid; ++i)
		swap(a[i], a[end - i + start]);
}

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void rotateLeft(int a[], int n, int k)
{
	reverseArray(a, 0, n - 1);
	reverseArray(a, 0, n - k - 1);
	reverseArray(a, n - k, n - 1);
}

int main()
{
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	cout << "Rotate left array 5 times." << endl;
	rotateLeft(a, n, 5);
	printArray(a, n);
	return 0;
}