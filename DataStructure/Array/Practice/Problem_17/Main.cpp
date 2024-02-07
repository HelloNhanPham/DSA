#include <iostream>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long max_so_far = INT16_MIN, current_sum_hear = 0;
        for (int i = 0; i < n; ++i)
        {
            current_sum_hear += arr[i];
            if (current_sum_hear > max_so_far)
                max_so_far = current_sum_hear;
            if (current_sum_hear < 0)
                current_sum_hear = 0;
        }
        return max_so_far;
    }
};

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[100];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}