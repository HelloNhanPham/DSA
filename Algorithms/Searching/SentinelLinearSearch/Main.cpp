#include <iostream>
#include <vector>
using namespace std;

int SentinelLinearSearch(vector<int> v, int value)
{
	int last = v[v.size() - 1];
	if (last == value)
		return v.size() - 1;
	v[v.size() - 1] = value;
	int index = 0;
	while (v.at(index) != value)
		index++;
	if (index < v.size() - 1)
		return index;
	return -1;
}

int main()
{
	vector<int> v;
	for (int i = 0; i < 10; ++i)
		v.push_back(i);
	cout << "Vector: ";
	for (int i = 0; i < v.size(); ++i)
		cout << v.at(i) << " ";
	cout << endl << "Check number 8: Index = " << SentinelLinearSearch(v, 8);
	return 0;
}
