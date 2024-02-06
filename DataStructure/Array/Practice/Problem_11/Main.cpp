#include <iostream>
#include <vector>
using namespace std;

int findFirstIndex(int arr[], int l, int r, int x)
{
    int res = -1;
    while (l <= r)
    {
        int mid = (l+r)/2;
        if (arr[mid] == x)
        {
            res = mid;
            r = mid - 1;
        }
        else if (x > arr[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }
    return res;
}

int findLastIndex(int arr[], int l, int r, int x)
{
    int res = -1;
    while (l <= r)
    {
        int mid = (l+r)/2;
        if (arr[mid] == x)
        {
            res = mid;
            l = mid + 1;
        }
        else if (x > arr[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }
    return res;
}

class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        vector<int> res;
        res.push_back(findFirstIndex(arr, 0, n-1, x));
        res.push_back(findLastIndex(arr, 0, n-1, x));
        return res;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[100],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}