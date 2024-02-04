#include <iostream>
#include <string>
using namespace std;

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        if (n*9 < sum)
            return "-1";
        string ans = "";
        for (int i = n; i > 0; --i)
        {
            if (sum > 9)
            {
                ans.push_back('9');
                sum -= 9;
            }
            else
            {
                ans.push_back(sum + '0');
                sum -= sum;
            }
        }
        return ans;
    }
};

int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}