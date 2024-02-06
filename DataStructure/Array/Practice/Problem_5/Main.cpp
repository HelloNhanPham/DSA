#include <iostream>
using namespace std;

class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int first = 0, second = 0, sum = 0, length = n + 1;
        while (first < n)
        {
            int currentSum = sum + arr[first];
            if (currentSum <= x)
            {
                sum = currentSum;
            }
            else
            {
                while (currentSum > x)
                {
                    currentSum -= arr[second];
                    second++;
                }
                sum = currentSum;
                if (first - second + 2 < length)
                    length = first - second + 2;
            }
            first++;
        }
        if (length == n+1)
            return 0;
        return length;
    }
};

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[100];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}