// Using two pointer.
#include <iostream>
#include <string>
using namespace std;

class Solution
{
    public:
    string reverseWord(string str)
    {
        int l = 0, r = str.length() - 1;
        while (l < r)
        {
            swap(str[l],str[r]);
            l++;
            r--;
        }
        return str;
    }
};

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}