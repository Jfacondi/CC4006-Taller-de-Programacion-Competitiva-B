#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool sumK(vector<int> g, ll k, ll t) {
    ll sum = 0;
    ll size = g.size();
    for (ll i = 0; i < size; i++) {
        sum += k / g[i];
        if(sum>=t){
            break;
        }
    }
    return sum >= t;
}

int main(){
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
    ll mid;
    ll ans;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (sumK(g, mid, t)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}