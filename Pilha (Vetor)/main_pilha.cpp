#include <iostream>
#include "stack.h"

using namespace std;

int main(){

    pilha pilha1; 
    tipoItem item; 
    int option; 

    cout << "Gerador de pilha:\n";
    do
    {
        cout << "Digite 0 para parar o programa\n";
        cout << "Digite 1 inserir um elemento\n";
        cout << "Digite 2 remover um elemento\n";
        cout << "Digite 3 para imprimir a pilha\n";
        cin >> option;

        if(option == 1){
            cout << "Digiet o elemento a ser inserido: \n";
            cin >> item; 
            pilha1.inserir(item);
        }else if(option == 2){
            item = pilha1.remover();
            cout << "Elemento removido: " << item << endl; 
        }else if (option == 3){
            pilha1.imprimir();
        }

    } while (option != 0);
    return 0;

}