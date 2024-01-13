#include <iostream>
#include <vector>
using namespace std;

int TernarySearch(vector<int> v, int key)
{
	int left = 0, right = v.size() - 1;
	while (left <= right)
	{
		int mid1 = left + (right - left) / 3;
		int mid2 = right - (right - left) / 3;
		if (v.at(mid1) == key)
			return mid1;
		else if (v.at(mid2) == key)
			return mid2;
		else
		{
			if (key < v.at(mid1))
				right = mid1 - 1;
			else if (key > v.at(mid2))
				left = mid2 + 1;
			else
			{
				left = mid1 + 1;
				right = mid2 - 1;
			}
		}
	}
	return -1;
}

int main()
{
	vector<int> v;
	for (int i = 0; i < 50; ++i)
		v.push_back(i);
	for (int i = 0; i < 50; ++i)
		cout << v.at(i) << " ";
	cout << endl;
	cout << "Check number 35 in the vector? " << TernarySearch(v,35);

	return 0;
}