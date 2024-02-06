#include <iostream>
#include <vector>
using namespace std;

class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        vector<int> f (n, 0);
        for (int i = 0; i < n; ++i)
            f[arr[i]]++;
        vector<int> res;
        bool flag = false;
        for (int i = 0; i < f.size(); ++i)
            if (f[i] > 1)
            {
                flag = true;
                res.push_back(i);
            }
        if (!flag)
            res.push_back(-1);
        return res;
    }
};

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[100];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}