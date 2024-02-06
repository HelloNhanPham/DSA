#include <iostream>
using namespace std;

int findFirstIndex(int arr[], int n, int x)
{
    int l = 0,  r = n - 1, res = -1;
    while (l <= r)
    {
        int mid = (l+r)/2;
        if (arr[mid]==x)
        {
            r = mid - 1;
            res = mid;
        }
        else if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return res;
}

int findLastIndex(int arr[], int n, int x)
{
    int l = 0,  r = n - 1, res = -1;
    while (l <= r)
    {
        int mid = (l+r)/2;
        if (arr[mid]==x)
        {
            l = mid + 1;
            res = mid;
        }
        else if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return res;
}

class Solution{
public:	
	int count(int arr[], int n, int x) {
	    int first = findFirstIndex(arr, n, x);
	    int last = findLastIndex(arr, n, x);
	    if (last == -1)
	        return 0;
	    return last - first + 1;
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
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}