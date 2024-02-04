#include <iostream>
#include <string>
using namespace std;
string isGoodString(string s);
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	       string s;
	       cin>>s;
	       cout<<isGoodString(s)<<endl;
	    }
}

bool checkNextValue(char c1, char c2)
{
    if (abs(int(c2-c1))==25)
        return true;
    if (abs(int(c2-c1))==1)
        return true;
    return false;
}

string isGoodString(string s)
{
    int len = s.length();
    for (int i = 1; i < len; ++i)
        if (!checkNextValue(s[i], s[i-1]))
            return "NO";
    return "YES";
}