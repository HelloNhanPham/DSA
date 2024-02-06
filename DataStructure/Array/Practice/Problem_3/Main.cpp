#include <iostream>
using namespace std;

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        for (int i = 1; i < n; ++i)
            if (arr[i] < arr[i-1])
                return false;
        return true;
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
        bool ans = ob.arraySortedOrNot(arr, n);
        cout << ans << "\n";
    }
    return 0;
}