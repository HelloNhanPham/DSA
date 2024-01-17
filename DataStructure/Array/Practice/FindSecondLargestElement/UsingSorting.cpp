#include <iostream>
#include <algorithm>
using namespace std;

int findSecondLargest(int a[], int n)
{
	if (n < 2)
		return -1;
	sort(a, a+n);
	int max = a[n - 1];
	int index = n - 1;
	while (a[index] == max && index >= 0)
	{
		index--;
	}
	return index;
}

int main()
{
	int a[] = { 6,6,6,6,6 };
	int n = sizeof(a) / sizeof(int);
	int index = findSecondLargest(a, n);
	if (index == -1)
		cout << "Array does not have the second largest element." << endl;
	else
		cout << "The second largest element in the array is: " << a[index] << endl;
	return 0;
}