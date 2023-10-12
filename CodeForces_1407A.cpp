#include <iostream>
#include <vector>
using namespace std;

int sumx(vector<int> x) {
    int sum = 0;
    for (int k = 0; k < x.size(); k++) {
        if (k % 2 != 0) {
            sum -= x[k];
        } else {
            sum += x[k];
        }
    }
    return sum;
}

int main() {
    int intentos;
    cin >> intentos;
    for (int i = 0; i < intentos; i++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int k = 0; k < n; k++) {
            cin >> a[k];
        }
        int j = sumx(a);
        int m=n-1;
        /*int p=(a.size())/2;*/
        while (j != 0) {
            if(j>0){
                vector<int> v;
                v=a;
                v.erase(v.begin()+m);
                int z = sumx(v);
                if (z<j){
                    a.erase(a.begin()+m);
                    m--;
                }
                else{
                    m--;
                }
                
            }
            if(j<0){
                vector<int> v;
                v=a;
                v.erase(v.begin()+m);
                int z = sumx(v);
                if (z>j){
                    a.erase(a.begin()+m);
                    m--;
                }
                else{
                    m--;
                }
            }
                j = sumx(a);

        }
        cout << a.size() << endl;
        for (int k = 0; k < a.size(); k++) {
            cout << a[k] << ' ';
        }
        cout << "\n";
    }
    return 0;
}