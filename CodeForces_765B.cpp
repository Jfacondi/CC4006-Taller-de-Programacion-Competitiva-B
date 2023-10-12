#include <iostream>

using namespace std;

int main()
{
    char s;
    string cadena;
    cin >> cadena;
    for (int i=0;i<cadena.size();i++){
        if(i==0){
            s = 'a';
            if (cadena[i]!=s){
                cout << "NO\n";
                return 0;
            }
        }
        else{
            if (s+1<cadena[i]){
                cout << "NO\n";
                return 0;
            }
            if (cadena[i]==s+1){
                s=cadena[i];
            }
        }
    }
    cout << "YES\n";
    return 0;
}