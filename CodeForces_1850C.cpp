#include <iostream>

using namespace std;

int main()
{
    char s;
    s='.';
    int intentos;
    cin >> intentos;
    for(int i =0; i<intentos;i++){
        for(int k =0; k<8;k++){
            string palabra;
            for(int j=0;j<8;j++){
                char x;
                cin >> x;
                if(x!=s && x!='\n'){
                    palabra=palabra+x;
                    
                }
                
            }
            if (k==7){
                palabra=palabra+'\n';
            }
            cout << palabra;
        }
    }
}