#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        int du = 1, index = N-1;
        while (du==1 && index >= 0)
        {
            arr[index]+=du;
            if (arr[index]==10)
            {
                arr[index] = 0;
                du = 1;
            }
            else
                du = 0;
            index--;
        }
        if (du == 1)
            arr.insert(arr.begin(), 1);
        return arr;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}