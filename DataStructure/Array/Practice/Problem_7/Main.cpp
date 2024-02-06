#include <iostream>
using namespace std;

int findMaxIndexOf1(int arr[], int l, int r)
{
    if (l <= r)
    {
        int mid = (l+r)/2;
        if (arr[mid] == 0)
            return findMaxIndexOf1(arr, l, mid-1);
        if (arr[mid] == 1)
        {
            if (arr[mid+1] == 0)
                return mid;
            return findMaxIndexOf1(arr, mid + 1, r);
        }
    }
    return -1;
}

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        if (arr[0] == 0)
            return n;
        if (arr[n-1] == 1)
            return 0;
        int index = findMaxIndexOf1(arr, 0, n-1);
        return n - 1 - index;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[100];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}