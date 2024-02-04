#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            vector<bool> alphabet1(26, false);
            vector<bool> alphabet2(26, false);
            int len1 = A.length(), len2 = B.length();
            for (int i = 0; i < len1; ++i)
                alphabet1[A[i]-'a'] = true;
            for (int i = 0; i < len2; ++i)
                alphabet2[B[i]-'a'] = true;
            string res = "";
            for (int i = 0; i < 26; ++i)
            {
                bool a = alphabet1.at(i);
                bool b = alphabet2.at(i);
                if ((a&&!b) || (!a&&b))
                    res.push_back('a' + i);
            }
            if (res=="")
                return "-1";
            return res;
        }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}