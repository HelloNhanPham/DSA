#include <iostream>
using namespace std;

int findLargest(int a[], int n)
{
	if (n < 1)
		return -1;
	int temp = 0;
	for (int i = 0; i < n; ++i)
		if (a[i] > a[temp])
			temp = i;
	return temp;
}

int findSecond(int a[], int n)
{
	if (n < 2)
		return -1;
	int first = findLargest(a, n);
	int second = 0;
	while (a[second] == a[first])
		second++;
	int i = second;
	for (i; i < n; ++i)
		if (a[i] > a[second] && a[i] < a[first])
			second = i;
	if (a[second] == a[first])
		return -1;
	return second;
}

int main()
{
	int a[] = { 12, 35, 1, 10, 34, 1 };
	int n = sizeof(a) / sizeof(int);
	int index = findSecond(a, n);
	if (index == -1)
		cout << "There is no second largest element in the array!" << endl;
	else
		cout << "The second lragest element in the array is: " << a[index];
	return 0;
}