#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int casos;
    cin >> casos;
    for(int casoss=0;casoss<casos;casoss++){
    int n;
    cin >> n;
    ll t;
    cin >> t;
    vector<int> g(n);
    for(ll i=0;i<n;i++){
        cin >> g[i];
    }
    ll l = 1;
    ll r = 1e18;
    ll ans=0;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        ll act=mid;
        for(int i=0;i<t;i++){
            act-=upper_bound(begin(g),end(g),act)-begin(g);
        }
        if (act>0) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << endl;
    }
    return 0;
}