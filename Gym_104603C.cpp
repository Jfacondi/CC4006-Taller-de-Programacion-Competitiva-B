#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    multiset<int> redp, bluep;
    for(int i = 0; i< n; i++) {
        int input;
        cin >> input;
        redp.insert(input);
    }
    for(int i = 0; i< n; i++) {
        int input;
        cin >> input;
        bluep.insert(input);
    }

    auto itr = redp.begin();
    auto itb = bluep.rbegin();

    int max = *itr + *itb , min = *itr + *itb;
    
    while(itr != redp.end()){
        int val = *itr + *itb;
        if(val < min){
            min = val;
            itr++;
            itb++;
            continue;
        }
        if(val > max){
            max = val;
            itr++;
            itb++;
            continue;
        }
        itr++;
        itb++;
    }

    cout << max - min;
    return 0;
}