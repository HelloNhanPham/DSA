#include <iostream>
#include <unordered_map>
using namespace std;

class Solution{   
public:
    bool isProduct(int arr[], int n, long long x) {
        unordered_map<int, bool> mp;
        for (int i = 0; i < n; ++i)
        {
            mp[arr[i]] = true;
            if (arr[i]==0 || x%arr[i]!=0)
                continue;
            if (mp[x/arr[i]])
                return true;
        }
        return false;
    }
};

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        long long x;
        cin >> n >> x;
        int arr[100];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.isProduct(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}