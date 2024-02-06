//Using two pointers technique
#include <iostream>
#include <algorithm>
using namespace std;

class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    sort(arr, arr+n);
	    int l = 0, r = n-1;
	    while (l < r)
	    {
	        int currentSum = arr[r] + arr[l];
	        if (currentSum == x)
	            return true;
	        else if (currentSum > x)
	            r--;
	        else
	            l++;
	    }
	    return false;
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[100];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

// Time complexity O(nlogn)
// Space complexity O(1)