#include <iostream>
using namespace std;

int findBitonicPoint(int arr[], int l, int r)
{
    if (l <= r)
    {
        int mid = (l+r)/2;
        if (arr[mid]>arr[mid-1])
        {
            if (arr[mid]<arr[mid+1])
                return findBitonicPoint(arr, mid + 1, r);
            else
                return mid;
        }
        return findBitonicPoint(arr, l, mid-1);
    }
    return -1;
}

class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    if (n==1)
	        return arr[0];
	    int validIndex = findBitonicPoint(arr, 0, n-1);
	    if (validIndex==-1)
	        return arr[n-1];
	    return arr[validIndex];
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[1000];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}