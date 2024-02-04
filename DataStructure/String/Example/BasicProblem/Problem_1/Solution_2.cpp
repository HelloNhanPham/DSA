// Using inbuilt method
#include <iostream>
#include <string>
using namespace std;

class Solution
{
    public:
    string reverseWord(string str)
    {
        reverse(str.begin(), str.end());
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