#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool BinarySearch(int a[], int left, int right, int key)
{
    if (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] == key)
            return true;
        if (key > a[mid])
            return BinarySearch(a, mid + 1, right, key);
        return BinarySearch(a, left, mid - 1, key);
    }
    return false;
}

void findPair(int a[], int size, int diff)
{
    // Step 1: Sort the array (You can use another sorting algorithms).
    sort(a, a + size);

    // Step 2: Use Binary Search to check pair.
    for (int i = 0; i < size; ++i)
    {
        int tempINT = a[i] + diff;
        if (BinarySearch(a, 0, size - 1, tempINT))
        {
            cout << "Pair Found: " << a[i] << " and " << tempINT;
            return;
        }

    }
    cout << "Pair Not Found!";
}

void printArray(int a[], int size)
{
    for (int i = 0; i < size; ++i)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = { 1, 8, 30, 40, 100 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int diff = -60;
    printArray(arr, n);
    findPair(arr, n, diff);
	return 0;
}