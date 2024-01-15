#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void reverseArray(int a[], int n)
{
	int mid = n / 2;
	for (int i = 0; i < mid; ++i)
		swap(a[i], a[n - 1 - i]);
	cout << "Reverse successfully!" << endl;
}

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

int main()
{
	cout << "Situation 1:" << endl;
	int arr[] = { 4, 5, 1, 2 };
	int size = sizeof(arr) / sizeof(int);
	printArray(arr, size);
	reverseArray(arr, size);
	printArray(arr, size);
	cout << "Situation 2:" << endl;
	int arr1[] = { 1, 2, 3 };
	int size1 = sizeof(arr1) / sizeof(int);
	printArray(arr1, size1);
	reverseArray(arr1, size1);
	printArray(arr1, size1);
	return 0;
}