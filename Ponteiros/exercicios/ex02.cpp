#include <iostream>

using namespace std;

int main (){
    int var1 = 50;
    int var2 = 100; 

    if(&var1 > &var2){
        cout << "O endereco maior eh o de var1, seu valor eh: " << &var1 << endl;
    }
    else{
        cout << "O endereco maior eh o de var2, seu valor eh: " << &var2 << endl;
    }

    return 0;
}