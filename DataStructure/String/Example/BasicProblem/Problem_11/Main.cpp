#include <iostream>
#include <string>
using namespace std;

class Solution
{
    public:
        bool check (string s)
        {
            int len = s.length();
            if (len == 0 || len == 1)
                return true;
            for (int i = 1; i < len; ++i)
                if (s[i]!=s[i-1])
                    return false;
            return true;
        }
};

int main()
{
    int t; cin >> t;
    while (t--)
    {
		string s;
		cin >> s;
		Solution ob;
		if (ob.check (s))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
}