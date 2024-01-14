#include <iostream>
using namespace std;

bool BinarySearch(int a[], int l, int r, int key)
{
	if (l <= r)
	{
		int mid = (l + r) / 2;
		if (a[mid] == key)
			return true;
		if (key > a[mid])
			return BinarySearch(a, mid + 1, r, key);
		return BinarySearch(a, l, mid - 1, key);
	}
	return false;
}

void CommonElements(int a[], int na, int b[], int nb, int c[], int nc)
{
	for (int i = 0; i < na; ++i)
		if (BinarySearch(b,0,nb-1,a[i])&&BinarySearch(c,0,nc-1,a[i]))
			cout << a[i] << " ";
	cout << endl;
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int ar1[] = { 1, 5, 5 };
	int ar2[] = { 3, 4, 5, 5, 10 };
	int	ar3[] = { 5, 5, 10, 20 };
	int s1 = sizeof(ar1) / sizeof(int);
	int s2 = sizeof(ar2) / sizeof(int);
	int s3 = sizeof(ar3) / sizeof(int);
	cout << "ar1[] = ";
	printArray(ar1, s1);
	cout << "ar2[] = ";
	printArray(ar2, s2);
	cout << "ar3[] = ";
	printArray(ar3, s3);
	cout << "Common elements are: ";
	CommonElements(ar1, s1, ar2, s2, ar3, s3);
	return 0;
}