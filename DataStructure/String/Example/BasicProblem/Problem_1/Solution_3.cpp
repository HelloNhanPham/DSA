#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseString(string str, int l, int r)
{
    if (l >= r)
        return str;
    swap(str[l], str[r]);
    return reverseString(str, l+1, r-1);
}

class Solution
{
    public:
    string reverseWord(string str)
    {
        return reverseString(str, 0, str.length()-1);
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