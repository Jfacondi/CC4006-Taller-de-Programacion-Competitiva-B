#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n,x;
    cin >> n >> x;
    vector<ll> g(n);
    for (int i = 0; i < n; i++){
        cin >> g[i];}
    int ans=1;
    int max=1;
    for (int i = 1; i < n; i++){
        if((g[i]-g[i-1])<=x ){
            ans++;
        }
        else{
            if(max<ans){
                max=ans;
            }
           ans=1; 
        }
    }
    if(max<ans){
        max=ans;}
    cout << max << endl;
    return 0;
}
