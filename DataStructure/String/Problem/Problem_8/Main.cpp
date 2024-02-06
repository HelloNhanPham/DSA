#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution
{
    public:
        int countWords(string list[], int n)
        {
            unordered_map<string, int> m;
            for (int i = 0; i < n; ++i)
                m[list[i]]++;
            int count = 0;
            for (auto i : m)
                if (m[i.first] == 2)
                    count++;
            return count;
        }

};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string list[100];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;    
        cout <<ob.countWords(list, n)<<endl;
    }
    return 0;
}