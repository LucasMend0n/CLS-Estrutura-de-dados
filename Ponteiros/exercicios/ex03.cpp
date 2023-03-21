#include <iostream>

using namespace std;

int main (){
    int v1, v2; 
    
    cout << "Comparador de enderecos!" << endl;
    cout << "Digite o valor de v1: " << endl; 
    cin >> v1;
    cout << "Digite o valor de v2: " << endl; 
    cin >> v2;

    if(&v1 > &v2){
        cout << "O endereco maior eh o de v1, seu valor eh: " << v1 << endl;
    }
    else{
        cout << "O endereco maior eh o de v2, seu valor eh: " << v2 << endl;
    }

    return 0;
}