#include <iostream>
#include <math.h>
#include <vector>
#include <unordered_set>
using namespace std;

int sumProperDivisors(int n)
{
	int sum = 0;
	for (int i = 1; i <= sqrt(n); ++i)
	{
		if (i * i == n)
			sum += i;
		else if (n%i==0)
			sum += (i + n / i);
	}
	return sum - n;
}

void printAliquot(int n)
{
    cout << n;
    unordered_set<int>  s;
    s.insert(n);

    int next = 0;
    while (n > 0)
    {
        n = sumProperDivisors(n);
        if (s.find(n) != s.end())
        {
            cout << "\nRepeats with " << n;
            break;
        }
        cout << n << " ";
        s.insert(n);
    }
}

int main()
{
	int num = 25;
    printAliquot(num);
	return 0;
}