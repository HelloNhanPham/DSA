#include <iostream>
using namespace std;

class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        if (a[n-1]!=b[n-2])
            return n-1;
        int index = 0;
        while (a[index] == b[index])
            index++;
        return index;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[100], b[100 - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout << obj.findExtra(a, b, n) << endl;
    }
}