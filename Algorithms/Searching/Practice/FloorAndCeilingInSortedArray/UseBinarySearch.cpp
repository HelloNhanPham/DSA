#include <iostream>
using namespace std;

int binarySearch(int a[], int l, int r, int key)
{
	if (l <= r)
	{
		if (l == r)
			return l;
		int mid = (l + r) / 2;
		if (a[mid] == key)
			return mid;
		if (key > a[mid])
			return binarySearch(a, mid + 1, r, key);
		return binarySearch(a, l, mid - 1, key);
	}
	return -1;
}

void FloorAndCeiling(int a[], int n, int x)
{
	if (x <= a[0])
	{
		if (x < a[0])
			cout << "Floor doesn't exist in array, ceil = " << a[0];
		else
			cout << "Floor = " << a[0] << ", ceil = " << a[1];
	}
	else if (x >= a[n - 1])
	{
		if (x > a[n - 1])
			cout << "Floor = " << a[n - 1] << ", ceil doesn't exist in array.";
		else
			cout << "Foor = " << a[n - 2] << ", ceil = " << a[n - 1];
	}
	else
	{
		int index = binarySearch(a, 0, n - 1, x);
		int min = a[index - 1], max = a[index + 1] , current = a[index];
		if (x < current)
			cout << "Floor = " << min << ", ceil = " << current;
		else if (x >= current)
			cout << "Floor = " << current << ", ceil = " << max;
	}
}

void printArray(int a[], int size)
{
	for (int i = 0; i < size; ++i)
		cout << a[i] << " ";
	cout << endl;
}

int main()
{
	int a[] = { 1, 2, 8, 10, 10, 12, 19 };
	int n = sizeof(a) / sizeof(int);
	cout << "Array[] = ";
	printArray(a, n);
	int x = 5;
	cout << "X = " << x << endl;
	FloorAndCeiling(a, n, x);
	return 0;
}