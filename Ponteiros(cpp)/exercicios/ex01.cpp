#include <iostream>

using namespace std;

int main(){
    int inteiro = 0;
    float real = 3.14; 
    char caracter = 'a';

    int *ptr_num = &inteiro; 
    float *ptr_real = &real; 
    char *ptr_char = &caracter;  

    cout << "Before modification" << endl;
    cout << "Num: " << inteiro << " Real: " << real << " Character: "<< caracter << endl;

    *ptr_num = 20; 
    *ptr_real = 2.70; 
    *ptr_char = 'b'; 

    cout << "After modification" << endl;
    cout << "Num: " << inteiro << " Real: " << real << " Character: "<< caracter << endl;


    return 0;
}