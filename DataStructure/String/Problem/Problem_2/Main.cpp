#include <iostream>
#include <vector>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}

string firstRepChar(string s)
{
    vector<bool> appeared(26, false);
    int len = s.length();
    for (int i = 0; i < len; ++i)
    {
        if (appeared[s[i]-'a'])
        {
            string temp = "";
            temp.push_back(s[i]);
            return temp;
        }
        appeared[s[i]-'a'] = true;
    }
    return "-1";
}