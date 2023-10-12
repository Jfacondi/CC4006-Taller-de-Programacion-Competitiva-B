#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
    ll k,n,a,b;
    ll casos;
    cin >> casos;
    for(int casoss=0;casoss<casos;casoss++){
        cin >> k >> n >> a >> b;
    ll l = 0;
    ll r = n;
    ll ans=-1;
    while (l <= r) {
        ll mid = (l+r) / 2;
        if ((k-mid*a > (n-mid)*b)) {
            l = mid + 1;
            ans = mid;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    }
    return 0;
}