#include <iostream>

using namespace std;

void checkValues(int a, int b, int *maior, int *menor){
    if(a > b){
        *maior = a;
        *menor = b;
    }
    else{
        *maior = b;
        *menor = a;
    }
}

int main (){
    int a, b; 
    cout << "Digite o valor 1: \n"; 
    cin >> a;  
    cout << "Digite o valor 2: \n"; 
    cin >> b; 

    int maior, menor;

    checkValues(a, b, &maior, &menor);

    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl; 


    return 0;
}