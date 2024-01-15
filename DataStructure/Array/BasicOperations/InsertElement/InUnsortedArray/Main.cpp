#include <iostream>
using namespace std;

void insertArray_End(int a[100], int &n, int k)
{
	if (n == 100)
	{
		cout << "Cannot insert because the array is full!" << endl;
		return;
	}
	a[n] = k;
	n++;
	cout << "Insert successfully!" << endl;
}

void insertArray_Front(int a[100], int &n, int k)
{
	if (n == 100)
	{
		cout << "Cannot insert because the array is full!" << endl;
		return;
	}
	n++;
	for (int i = n - 1; i > 0; --i)
		a[i] = a[i - 1];
	a[0] = k;
	cout << "Insert successfully!" << endl;
}

void insertArray_Any(int a[100], int& n, int k, int index)
{
	if (n == 100)
	{
		cout << "Cannot insert because the array is full!" << endl;
		return;
	}
	n++;
	for (int i = n - 1; i > index; --i)
		a[i] = a[i - 1];
	a[index] = k;
	cout << "Insert successfully!" << endl;
}

void printArray(int a[100], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

int main()
{
	int a[100] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
	int n = 13;
	printArray(a, n);
	cout << "Inserting 14 at the end of array!" << endl;
	insertArray_End(a, n, 14);
	printArray(a, n);
	cout << "Inserting 0 at the front of array!" << endl;
	insertArray_Front(a, n, 0);
	printArray(a, n);
	cout << "Inserting 5 at index 6 of the array!" << endl;
	insertArray_Any(a, n, 5, 6);
	printArray(a, n);
	return 0;
}