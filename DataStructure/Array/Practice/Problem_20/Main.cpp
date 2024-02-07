#include <iostream>
using namespace std;

class Solution{
  public:
    void swapElements(int arr[], int n){
        int first = 0;
        while (first < n - 2)
        {
            swap(arr[first], arr[first+2]);
            first++;
        }
    }
};

int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int n;
	    cin >> n;
	    
	    int arr[1000];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
        Solution obj;
        // calling function to swap the array swap elements
	    obj.swapElements(arr, n);
	    
	    // Printing the modified array
	    for(int i = 0;i<n;i++){
            cout << arr[i] << " ";
        }
	    
	    cout << endl;
	}
	
	return 0;
}