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

int binarySearch(int a[], int l, int r, int k)
{
	if (l <= r)
	{
		int mid = l + r;
		if (a[mid] == k)
			return mid;
		if (k > a[mid])
			return binarySearch(a, mid + 1, r, k);
		return binarySearch(a, l, mid - 1, k);
	}
	return -1;
}

void rearrange(int a[], int n)
{
	sort(a, a + n);
	int start = binarySearch(a, 0, n - 1, -1) + 1;
	for (int i = start; i < n; ++i)
		swap(a[a[i]], a[i]);
	cout << "The array after rearrange is: ";
	printArray(a, n);
}

int main()
{
	int a[] = { -1,-1,6,1,9,3,2,-1,4,-1, -1, -1,-1,-1,-1,-1 };
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	rearrange(a, n);
	return 0;
}