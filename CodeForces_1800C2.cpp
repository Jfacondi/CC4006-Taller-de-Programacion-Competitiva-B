#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int k=0;k<n;k++){
        int x;
        cin>> x;
        priority_queue<int> s;
        long long int valor=0;
        for(int i=0;i<x;i++){
            int var;
            cin >> var;
            if(var==0 && !s.empty()){
                valor=valor+s.top();
                s.pop();
            }
            else{
                if (var!=0){
                s.push(var);
                }
            }

        }
        cout<< valor << endl;
    }
    return 0;
}
