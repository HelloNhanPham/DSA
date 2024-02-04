#include <iostream>
#include <string>
#include <vector>
using namespace std;

int hashing(char c)
{
    if (c>='a' && c<='z')
        return (c-'a');
    if (c>='A' && c<='Z')
        return (c-'A');
    return -1;
}

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        int len = s.length(), cnt = 0;
        vector<bool> v(len, false);
        for (int i = 0; i < len; ++i)
        {
            int pos = hashing(s[i]);
            if (pos!=-1 && !v[pos])
            {
                cnt++;
                v[pos] = true;
            }
        }
        return (cnt==26);
    }

};

int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}