// Using loop
#include <iostream>
#include <string>
using namespace std;

class Solution
{
    public:
    string reverseWord(string str)
    {
        string res = "";
        int len = str.length();
        for (int i = len-1; i >= 0; --i)
            res.push_back(str[i]);
        return res;
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