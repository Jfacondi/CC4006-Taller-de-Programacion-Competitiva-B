#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int numeromayor(int num){
    int mayor;
    if((num<0)|| (num==0)) return 0;
    else{
        mayor= num%10;
        if(mayor<numeromayor(num/10)) return numeromayor(num/10);
        else return mayor;
    }
}
int main(){
    int n;
    cin >> n;
    int i=0;
    while (n>0){
        n=n-numeromayor(n);
        i++;
    }
    cout << i << endl;
}