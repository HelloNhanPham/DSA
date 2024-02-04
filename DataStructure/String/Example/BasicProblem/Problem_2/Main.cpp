#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        vector<string> v;
        int len = S.length();
        string temp = "";
        int i = 0, cnt = 0;
        while (i <= len)
        {
            if (S[i]=='.' || i==len)
            {
                if (cnt!=0) 
                    temp.push_back('.');
                v.push_back(temp);
                temp = "";
                cnt++;
            }
            else 
                temp.push_back(S[i]);
            i++;
        }
        string res = "";
        for (int i = v.size() - 1; i >= 0; --i)
            res += v.at(i);
        return res;
    } 
};

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}