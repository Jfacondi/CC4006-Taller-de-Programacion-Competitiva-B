#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int inf=1e9;
int main(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll h,a,r,d;
    h=0;
    a=0;
    r=0;
    d=0;
    ll costo;
    for(int i=0;i<n;i++){
        cin >> costo;
        if(s[i]=='h'){
            h=costo+h;
        }
        if(s[i]=='a'){
            a=min(h,a+costo);
        }
        if(s[i]=='r'){
            r=min(a,r+costo); 
        }
        if(s[i]=='d'){
            d=min(r,d+costo);
        }
    }
    cout << d << endl;
    return 0;
}
