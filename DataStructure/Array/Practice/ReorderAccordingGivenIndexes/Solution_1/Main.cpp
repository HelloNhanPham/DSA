#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;

bool comp(const pair<int, int>& v1,
          const pair<int, int>& v2)
{
    return v1.second < v2.second;
}
 
void reorder(int arr[], int index[], int n)
{
    vector<pair<int, int> > a(n);
    for (int i = 0; i < n; i++) {
        a[i].first = arr[i];
        a[i].second = index[i];
    }
    sort(a.begin(), a.end(), comp);
    for (int i = 0; i < n; i++) {
        arr[i] = a[i].first;
    }
}
 
int main()
{
    int arr[] = { 50, 40, 70, 60, 90 };
    int index[] = { 3, 0, 4, 1, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    reorder(arr, index, n);
    cout << "Reordered array is: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}