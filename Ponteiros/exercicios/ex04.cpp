#include <iostream>

using namespace std;

void swapValues(int *A, int *B){
    int temp;
    temp = *A;
    *A = *B;
    *B = temp;
}

int main (){
    int a, b;

    cout <<"Digite o valor de A: " << endl;
    cin >> a;
    cout <<"Digite o valor de B: " << endl;
    cin >> b;

    cout << "Valores digitados: A -> " << a << " B -> " << b << endl;

    swapValues(&a, &b);

    cout << "Valores trocados: A -> " << a << " B -> " << b << endl;
    

}