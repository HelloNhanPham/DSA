#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

int binarySearch(int a[], int l, int r, int k)
{
	if (l <= r)
	{
		if (l == r)
		{
			if (a[l] == k)
				return -1;
			else
				return l;
		}
		int mid = (l + r) / 2;
		if (a[mid] == k)
			return -1;
		if (a[mid] < k)
			return binarySearch(a, mid + 1, r, k);
		return binarySearch(a, l, mid - 1, k);
	}
	return INT16_MIN;
}

void insertArray(int a[], int& n, int k)
{
	int index = binarySearch(a, 0, n - 1, k);
	if (index == -1)
	{
		cout << "This value is exist in the array. Cannot insert it." << endl;
		return;
	}
	n++;
	for (int i = n - 1; i > index; --i)
		a[i] = a[i - 1];
	a[index] = k;
	cout << "Insert successfully!" << endl;
}

int main()
{
	int a[100] = { 1, 4, 9, 13, 25, 29, 32, 45, 78 };
	int n = 9;
	printArray(a, n);
	cout << "Inserting 26 in array!" << endl;
	insertArray(a, n, 26);
	printArray(a, n);
	cout << "Inserting 25 in array!" << endl;
	insertArray(a, n, 25);
	printArray(a, n);
	cout << "Inserting 0 in array!" << endl;
	insertArray(a, n, 0);
	printArray(a, n);
	return 0;
}