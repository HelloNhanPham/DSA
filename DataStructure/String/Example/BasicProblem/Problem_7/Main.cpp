#include <iostream>
#include <string>
using namespace std;

class Solution
{
  public:
    string modify (string s)
    {
        int len = s.length();
        int first = 0, second = 0;
        while (second < len)
        {
            if (s[second] != ' ')
            {
                swap(s[second], s[first]);
                first++;
            }
            second++;
        }
        return s;
    }
};

int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
    return 0;
}