#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    while(cin>>n){
        bool sb=true,pqb=true,qb=true;
        stack<int> s;
        queue<int> q;
        priority_queue<int> pq;
        for (int i=0;i<n;i++){
            int x,value;
            cin >> x >> value;
            if (x==1){
                s.push(value);
                q.push(value);
                pq.push(value);
            }
            else if(x==2){
                if (s.empty() || s.top()!=value){
                    sb = false;
                }
                if (q.empty() || q.front()!=value){
                    qb = false;
                }
                if (pq.empty() || pq.top()!=value){
                    pqb = false;
                }
                if (!s.empty()) s.pop();
                if (!q.empty()) q.pop();
                if (!pq.empty()) pq.pop();
            }
        
        }
        if (sb && !qb && !pqb){
            cout << "stack" << endl;
        }
        else if (!sb && qb && !pqb){
            cout << "queue" << endl;
        }
        else if (!sb && !qb && pqb){
            cout << "priority queue" << endl;
        }
        else if (!sb && !qb && !pqb){
            cout << "impossible" << endl;
        }
        else{
            cout << "not sure" << endl;
        }
        
    }
    return 0;
}