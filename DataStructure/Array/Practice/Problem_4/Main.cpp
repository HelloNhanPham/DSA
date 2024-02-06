#include <iostream>
#include <unordered_map>
using namespace std;

class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int,int> mp;
        for (int i = 0; i < n; ++i)
        {
            mp[a[i]]++;
            if (mp[a[i]] == k)
                return a[i];
        }
        return -1;
    }
};

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[100];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(a, n, k)<<endl;
	}
	
	return 0;
}