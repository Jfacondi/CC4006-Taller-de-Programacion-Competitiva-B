#include <iostream>
using namespace std;

void function(int w){
        if (w%2!=1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    
int main(){
    int w;
    cin>>w;
    if (w!=2){
    function(w);
    }
    else{
        cout << "NO\n";
    }
    return 0;
}