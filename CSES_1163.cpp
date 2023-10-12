#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    unsigned long long int x;
    cin >> x;

    set<unsigned int> posiciones;
    multiset<unsigned int> espacios;
    posiciones.insert(0);
    posiciones.insert(x);
    espacios.insert(x);

    unsigned int n;
    cin >> n;

    for(int i=0;i<n;i++) {
        unsigned int p;
        cin >> p;
        multiset<unsigned int>::iterator it1 = posiciones.upper_bound(p), it2 = it1;
        --it2;
        unsigned int espacio = *it1 - *it2;
        espacios.erase(espacios.find(espacio));
        espacios.insert(*it1 - p);
        espacios.insert(p - *it2);
        posiciones.insert(p);
        cout << *(--espacios.end()) << " ";
    }

    return 0;
}
