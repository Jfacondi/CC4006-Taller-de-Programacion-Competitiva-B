#include <iostream>

using namespace std;
bool bell(string torre, int largo){
    for(int k=1;k<largo;k++){
                if(torre[k]==torre[k-1]){
                    return false;
                }
            }
    return true;
}
int main()
{

    int intentos;
    cin >> intentos;
    for(int i =0; i<intentos;i++){
        int torrea, torreb;
        cin >> torrea >> torreb;
        string torreas,torrebs;
        cin >> torreas >> torrebs;
        while(true){
            if(bell(torreas,torrea)==true && bell(torrebs,torreb)==true){
                cout << "YES\n";
                break;
            }
            if(bell(torreas,torrea)==true && bell(torrebs,torreb)==false){
                if(torrebs[torreb-1]=='R'){
                    torrebs.pop_back();
                    torreas=torreas+'R';
                    torreb=torreb-1;
                    torrea=torrea+1;
                }
                else{
                    torrebs.pop_back();
                    torreas=torreas+'B';
                    torreb=torreb-1;
                    torrea=torrea+1;
                }
                if(bell(torreas,torrea)==false && bell(torrebs,torreb)==true){
                cout << "NO\n";
                break;
                }
            }
            else if(bell(torreas,torrea)==false && bell(torrebs,torreb)==true){
                    if(torreas[torrea-1]=='R'){
                    torreas.pop_back();
                    torrebs=torrebs+'R';
                    torrea=torrea-1;
                    torreb=torreb+1;
                }
                else{
                    torreas.pop_back();
                    torrebs=torrebs+'B';
                    torrea=torrea-1;
                    torreb=torreb+1;
                }
                if(bell(torreas,torrea)==true && bell(torrebs,torreb)==false){
                    cout << "NO\n";
                    break;
                }
                }
            else if(bell(torreas,torrea)==false && bell(torrebs,torreb)==false){
                cout << "NO\n";
                break;
                }
            else if(torrea==0 || torreb==0){
                cout << "NO\n";
                break;
            }
        }
}
}