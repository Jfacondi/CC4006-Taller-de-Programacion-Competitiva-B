#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool solve(ll mid, vector<ll> &g, int n, int k){
    int x=0;
    ll sum=0;
    for(int i=0;i<n;i++){
        if(g[i]>mid){
            return false;
        }
        sum+=g[i];
        if(sum>mid){
            x++;
            sum=g[i];
        }
    }
    x++;
    return x<=k;
}

int main(){
    int n,k;
    cin >> n >> k;
    vector<ll> g(n);
    for (int i = 0; i < n; i++){
        cin >> g[i];}
    ll l = 1;
    ll r = 1e18;
    ll ans= 0;
    while (l <= r) {
        ll mid = (l+r) / 2;
        if (solve(mid,g,n,k)) {
            r = mid - 1;
            ans = mid;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}
