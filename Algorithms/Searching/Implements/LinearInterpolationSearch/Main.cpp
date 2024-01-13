#include <iostream>
using namespace std;

int LinearInterpolationSearch(int a[], int lo, int hi, int key)
{
	int pos;
	if (lo <= hi && key >= a[lo] && key <= a[hi])
	{
		int pos = lo + (((double)(hi - lo) / (a[hi] - a[lo])) * (key - a[lo]));
		if (a[pos] == key)
			return pos;
		if (a[pos] > key)
			return LinearInterpolationSearch(a, lo, pos - 1, key);
		return LinearInterpolationSearch(a, pos + 1, hi, key);
	}
	return -1;
}

int main()
{
	int a[100];
	for (int i = 0; i < 100; ++i)
		a[i] = 7*i;
	cout << "Array = ";
	for (int i = 0; i < 100; ++i)
		cout << a[i] << " ";
	cout << endl;
	cout << "Check number 623 in the array? " << (LinearInterpolationSearch(a, 0, 99, 623)?"YES":"NO");
	return 0;
}

//x1 -> f(x1) = y1
//x2 -> f(x2) = y2
