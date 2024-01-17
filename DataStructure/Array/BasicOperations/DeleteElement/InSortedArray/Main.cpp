#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
	cout << "Array = ";
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int binarySearch(int a[], int l, int r, int k)
{
	if (l <= r)
	{
		int mid = (l + r) / 2;
		if (a[mid] == k)
			return mid;
		if (k > a[mid])
			return binarySearch(a, mid + 1, r, k);
		return binarySearch(a, l, mid - 1, k);
	}
	return -1;
}

void deleteElement(int a[], int& n, int k)
{
	int index = binarySearch(a, 0, n - 1, k);
	if (index == -1)
	{
		cout << "This element does not exist in the array! Cannot delete!" << endl;
		return;
	}
	for (int i = index; i < n - 1; ++i)
		a[i] = a[i + 1];
	a[n - 1] = 0;
	n--;
	cout << "Delete successfully!" << endl;
}

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9 };
	int n = 9;
	printArray(a, n);
	cout << "Deleting element 5 out of the array!" << endl;
	deleteElement(a, n, 5);
	printArray(a, n);
	return 0;
}