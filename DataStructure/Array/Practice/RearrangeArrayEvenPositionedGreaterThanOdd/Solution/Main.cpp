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

void Rearrange(int a[], int n)
{
	sort(a, a + n);
	int index_even = 1, index_odd = 0;
	int b[100];
	int mid = ((n % 2 == 0) ? (n / 2) : (n / 2 + 1));
	cout << mid;
	for (int i = 0; i < n; ++i)
	{
		if (i < mid)
		{
			b[index_odd] = a[i];
			index_odd += 2;
		}
		else
		{
			b[index_even] = a[i];
			index_even += 2;
		}
	}
	for (int i = 0; i < n; ++i)
		a[i] = b[i];
}

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9, 10 };
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	Rearrange(a, n);
	printArray(a, n);
	return 0;
}