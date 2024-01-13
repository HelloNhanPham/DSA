#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int jumpSearch(vector<int> v, int key)
{
	if (v.at(0) > key)
		return -1;
	int step = sqrt(v.size()), index = 0, maxIndex = v.size();
	while (index <= maxIndex)
	{
		if (key == v.at(index))
			return index;
		else if (key > v.at(index))
		{
			index += step;
			if (index >= v.size())
			{
				index -= step;
				maxIndex = v.size() - 1;
				step = 1;
			}	
		}
		else 
		{
			maxIndex = index;
			index -= step;
			step = 1;
		}
	}
	return -1;
}

int main()
{
	vector<int> v;
	for (int i = 0; i < 20; ++i)
		v.push_back(i*5);
	for (int i = 0; i < v.size(); ++i)
		cout << v.at(i) << " ";
	cout << endl;
	cout << "Check number 95 in vector? " << jumpSearch(v, 95);
	return 0;
}
