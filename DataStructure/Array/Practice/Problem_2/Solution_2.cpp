// Using unordered map
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    unordered_map<int, bool> map;
	    for (int i = 0; i < n; ++i)
	    {
	        if (map.count(x-arr[i])!=0)
	            return true;
	        else 
	            map[arr[i]] = true;
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

// Time complexity: O(n).
// Space complexity: O(n).