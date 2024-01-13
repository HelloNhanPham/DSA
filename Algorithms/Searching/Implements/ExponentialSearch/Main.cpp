#include <iostream>
using namespace std;

int binarySearch(int a[], int l, int r, int key)
{
	if (l <= r)
	{
		int mid = (l + r)/2;
		if (a[mid] == key)
			return mid;
		if (a[mid] > key)
			return binarySearch(a, l, mid-1, key);
		return binarySearch(a, mid+1, r, key);
	}
	return -1;	
}

int exponentialSearch(int a[], int n, int key)
{
	if (a[0] == key)
		return 0;
	int i = 1;
	while (i < n && a[i] <= key)
		i*=2;
	return binarySearch(a, i/2, min(i,n-1), key);
}

int main()
{
	int a[100];
	for (int i = 0; i < 100; ++i)
		a[i] = 13*i;
	cout << "Array = ";
	for (int i = 0; i < 100; ++i)
		cout << a[i] << " ";
	cout << endl << "Check number 1287 in the array? " << (exponentialSearch(a, 100, 1287)!=-1?"YES":"NO");
	cout << endl << "Check number 599 in the array? " << (exponentialSearch(a, 100, 599)!=-1?"YES":"NO");
	return 0;
}
