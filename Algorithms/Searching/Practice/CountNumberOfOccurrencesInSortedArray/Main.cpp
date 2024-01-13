#include <iostream>
#include <vector>
using namespace std;

int binarySearching(vector<int> v, int left, int right, int key)
{
	if (left <= right)
	{
		int mid = (left+right)/2;
		if (v[mid] == key)
			return mid;
		if (v[mid] > key)
			return binarySearching(v, left, mid-1, key);
		return binarySearching(v, mid+1, right, key);
	}
	return -1;
}

int countOccurrences(vector<int> v, int key)
{
	int findIndex = binarySearching(v, 0, v.size()-1, key);
	if (findIndex == -1)
		return 0;
	int count = 1, leftSide = findIndex-1, rightSide = findIndex+1;
	while (leftSide >= 0 && v.at(leftSide)==key)
	{
		count++;
		leftSide--;
	}
	while (rightSide < v.size() && v.at(rightSide)==key)
	{
		count++;
		rightSide++;
	}
	return count;
}

void printVector(vector<int> v)
{
	for (int i = 0; i < v.size(); ++i)
		cout << v.at(i) << " ";
}

int main()
{
	vector<int> v;
	for (int i = 0; i < 3; ++i) v.push_back(1);
	for (int i = 0; i < 8; ++i) v.push_back(2);
	for (int i = 0; i < 5; ++i) v.push_back(3);
	for (int i = 0; i < 6; ++i) v.push_back(4);
	for (int i = 0; i < 2; ++i) v.push_back(5);
	cout << "Vector = ";
	printVector(v);
	cout << endl;
	cout << "The occurrents of number 1 in vector is: " << countOccurrences(v, 1) << endl;
	cout << "The occurrents of number 2 in vector is: " << countOccurrences(v, 2) << endl;
	cout << "The occurrents of number 3 in vector is: " << countOccurrences(v, 3) << endl;
	cout << "The occurrents of number 4 in vector is: " << countOccurrences(v, 4) << endl;
	cout << "The occurrents of number 5 in vector is: " << countOccurrences(v, 5) << endl;
	cout << "The occurrents of number 6 in vector is: " << countOccurrences(v, 6) << endl;
	return 0;
}
