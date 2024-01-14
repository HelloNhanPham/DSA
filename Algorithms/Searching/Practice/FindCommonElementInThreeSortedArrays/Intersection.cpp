#include <iostream>
using namespace std;

void FindIntersection(int a1[], int n1, int a2[], int n2, int tempArr[], int &n)
{
	n = 0;
	int i = 0, j = 0;
	while (i < n1 && j < n2)
	{
		if (a1[i] < a2[j]) i++;
		if (a2[j] < a1[i]) j++;
		else
		{
			tempArr[n] = a1[i];
			i++;
			j++;
			n++;
		}
	}
}

void printArray(int a[], int size)
{
	for (int i = 0; i < size; ++i)
		cout << a[i] << " ";
	cout << endl;
}

void FindCommonElements(int a[], int na, int b[], int nb, int c[], int nc)
{
	int tempArray[100], tempArr[100], size, s;
	FindIntersection(a, na, b, nb, tempArray, size);
	FindIntersection(tempArray, size, c, nc, tempArr, s);
	printArray(tempArr, s);
}

int main()
{
	int a1[] = { 1, 5, 10, 20, 40, 80 };
	cout << "Array 1 = ";
	printArray(a1, sizeof(a1) / sizeof(int));
	int a2[] = { 6, 7, 20, 80, 100 };
	cout << "Array 2 = ";
	printArray(a2, sizeof(a2) / sizeof(int));
	int a3[] = { 3, 4, 15, 20, 30, 70, 80, 120 };
	cout << "Array 3 = ";
	printArray(a3, sizeof(a3) / sizeof(int));
	cout << "The common elements in three sorted arrays: ";
	FindCommonElements(a1, sizeof(a1) / sizeof(int), a2, sizeof(a2) / sizeof(int), a3, sizeof(a3) / sizeof(int));
	return 0;
}