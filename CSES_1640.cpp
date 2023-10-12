#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int x, n;
    cin >> n >> x;
    
    vector<int> m(n);
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }
    
    map<int, int> v;
    for (int i = 0; i < n; i++) {
        int complemento = x - m[i];
        if (v.find(complemento) != v.end()) {
            cout << v[complemento] + 1 << " " << i + 1;
            return 0;
        }
        v[m[i]] = i;
    }
    
    cout << "IMPOSSIBLE";
    return 0;
}
