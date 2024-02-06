#include <iostream>
using namespace std;

int convertFive(int n);

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}

int convertFive(int n) {
    int cnt = 1, res = 0, sum = 0;
    while (n!=0)
    {
        int lastDigit = n%10;
        if (lastDigit == 0) 
            lastDigit = 5;
        sum += (lastDigit * cnt);
        cnt *= 10;
        n /= 10;
    }
    return sum;
}