#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> v)
{
	long long realSum = 0;
	for (int i = 0; i < v.size(); ++i)
		realSum += v.at(i);
	long long sum = (v.size()+1)*(v.size()+2)/2;
	return sum - realSum;
}

void printVector(vector<int> v)
{
	for (int i = 0; i < v.size(); ++i)
		cout << v.at(i) << " ";
}

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(6);
	v.push_back(3);
	v.push_back(7);
	v.push_back(8);
	cout << "The vector is: ";
	printVector(v);
	cout << endl;
	cout << "The missing number is: " << missingNumber(v);
	return 0;
}
