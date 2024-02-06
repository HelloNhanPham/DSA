#include <iostream>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[1000], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.transitionPoint(a, n) << endl;
    }
    return 0;
}

int findTransitionPoint(int arr[], int l, int r)
{
    if (l <= r)
    {
        int mid = (l+r)/2;
        if (arr[mid] == 0)
            return findTransitionPoint(arr, mid + 1, r);
        if (arr[mid-1]==0)
            return mid;
        return findTransitionPoint(arr, l, mid - 1);
    }
    return -1;
}

class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        if (arr[n-1] == 0)
            return -1;
        if (arr[0] == 1)
            return 0;
        return findTransitionPoint(arr, 0, n-1);
    }
};

