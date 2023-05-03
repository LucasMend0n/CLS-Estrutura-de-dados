#include <iostream>
#include "fila.h"

using namespace std;

int main()
{
    fila queue;
    int opt; 
    TipoItem item; 

    cout << "Programa gerador de filas: \n";  

    do{
        cout << "Digite 0 para parar o programa\n";
        cout << "Digite 1 para inserir um elemento \n"; 
        cout << "Digite 2 para remover um elemento \n"; 
        cout << "Digite 3 para imprimir a fila\n"; 
        cin >> opt;

        switch (opt)
        {
        case 1:
            cout << "Digite o elemento a ser inserido: \n";
            cin >> item; 
            queue.inserir(item);
            break;
        case 2: 
            item = queue.remove(); 
            cout << "O elemento removido foi: " << item << endl;
            break;
        case 3:
            queue.imprimir(); 
            break;
        } 


    }while(opt != 0); 
}