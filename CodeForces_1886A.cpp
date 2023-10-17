#include <bits/stdc++.h>
using namespace std;

bool findThreeElementsWithSum(int X, int min_value, int max_value) {

    for (int i = min_value; i <= max_value; i++) {
        for (int j = i + 1; j <= max_value; j++) {
            int k = X - i - j;
            if (k > j && k <= max_value && i % 3 != 0 && j % 3 != 0 && k % 3 != 0) {
                cout << "YES" << endl << i << " " << j << " " << k << endl;
                return true;
            }
        }
    }

    return false; 
}

int main() {
    int n;
    cin >> n;
    while(n--){
        int X;
        cin >> X;
        if (!findThreeElementsWithSum(X, 1, X)) {
            cout << "NO" << endl;
        }
    }
    return 0;
}