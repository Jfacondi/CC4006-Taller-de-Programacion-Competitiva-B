#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int inf=1e9;
int main(){
    int n;
    cin >> n;
    vector<int> g(3);
    for(int i=0; i<3;i++){
        cin >> g[i];
    }
    vector<int> dp(n+1, -inf);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<3;j++){
        if(i-g[j]>=0){
        dp[i]=max(dp[i],dp[i-g[j]]+1);
        }
        }
    }
    cout << dp[n] << endl;
    return 0;
}
