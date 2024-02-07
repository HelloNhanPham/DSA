#include <iostream>
using namespace std;

class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        int l = 0, r = n-1;
        long long sumBegin = 0, sumAfter = 0;
        while (r>l)
        {
            if (sumBegin < sumAfter)
            {
                sumBegin += a[l];
                l++;
            }
            else if (sumBegin > sumAfter)
            {
                sumAfter += a[r];
                r--;
            }
            else
            {
                sumAfter += a[r];
                r--;
                sumBegin += a[l];
                l++;
            }
        }
        if (sumBegin == sumAfter && r==l)
            return r+1;
        return -1;
    }
};

int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[1000];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}