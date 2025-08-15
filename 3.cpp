#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        int evenCount = 0, oddCount = 0;
        int x;

        for (int i = 0; i < n; ++i) {
            cin >> x;
            if (x % 2 == 0)
                ++evenCount;
            else
                ++oddCount;
        }

        int evenPos = n / 2;
        int oddPos = n - evenPos;

        if (evenCount == evenPos && oddCount == oddPos)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
