#include <iostream>
using namespace std;

int findSecondLargest(int a[], int n)
{
	if (n < 2)
		return -1;
	int first = 0, second = -1;
	for (int i = 1; i < n; ++i)
	{
		if (a[first] < a[i])
		{
			second = first;
			first = i;
		}
		else if (a[first] == a[i])
			continue;
		else if (a[i] > a[second])
			second = i;
	}
	return second;
}

int main()
{
	int a[] = { 12, 35, 1, 10, 34, 1 };
	int n = sizeof(a) / sizeof(int);
	int index = findSecondLargest(a, n);
	if (index == -1)
		cout << "There is no second largest element in the array!" << endl;
	else
		cout << "The second largest element in the array is: " << a[index] << endl;
	int b[] = { 10, 10, 10 };
	int m = sizeof(b) / sizeof(int);
	int index2 = findSecondLargest(b, m);
	if (index2 == -1)
		cout << "There is no second largest element in the array!" << endl;
	else
		cout << "The second largest element in the array is: " << b[index2] << endl;
	return 0;
}