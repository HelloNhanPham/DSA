// Using stack
#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution
{
    public:
    string reverseWord(string str)
    {
        stack <char> st;
        for (auto c : str)
            st.push(c);
        string res = "";
        while (!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
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