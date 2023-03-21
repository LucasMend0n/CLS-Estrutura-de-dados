#include <iostream>
#include "stack.h"

using namespace std;

pilha::pilha()
{
    tamanho = 0;
    estrutura = new tipoItem[max_itens];
}
pilha::~pilha()
{
    delete[] estrutura;
}
bool pilha::estaCheia()
{
    return (tamanho == max_itens);
}
bool pilha::estaVazia()
{
    return (tamanho == 0);
}
void pilha::inserir(tipoItem item) // push
{
    if (!estaCheia())
    {
        estrutura[tamanho] = item;
        tamanho++;
    }
    else
    {
        cout << "A pilha esta cheia!\n";
        cout << "Nao eh possivel inserir este elemento!";
    }
}
tipoItem pilha::remover() // pop
{
    if (!estaVazia())
    {
        tamanho--;
        return estrutura[tamanho];
    }
    else
    {
        cout << "A pilha esta vazia!\n";
        cout << "Nao eh possivel remover elementos!";
    }
}
void pilha::imprimir() // print
{
    cout <<"Pilha ["; 
    for (int i = 0; i <tamanho; i++){
        cout << estrutura[i] << " "; 
    }
    cout <<"]\n"; 

}
int pilha::qualTamanho() // lenght
{
    return tamanho;
}