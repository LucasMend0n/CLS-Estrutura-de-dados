#include <iostream>
#include "fila.h"

using namespace std;

fila::fila()
{
    primeiro = 0; 
    ultimo = 0; 
    estrutura = new TipoItem[max_itens];
}
fila::~fila()
{
    delete [] estrutura; 
}
bool fila::isEmpty()
{
    return primeiro == ultimo; 
}
bool fila::isFull()
{
    return (ultimo - primeiro == max_itens);
}
void fila::inserir(TipoItem item)
{
      if(isFull()){
        cout << "A fila esta cheia\n"; 
        cout << "Este elemento nao pode ser inserido\n";
      }else{
        estrutura[ultimo % max_itens] = item;
        ultimo++;
      }
}
TipoItem fila::remove()
{
    if(isEmpty()){
        cout << "A fila esta Vazia\n"; 
        cout << "Nenhum elemento pode ser removido\n";
      }else{
        primeiro++;
        return estrutura[(primeiro -1) % max_itens]; 
      }
}
void fila::imprimir()
{
  cout << "Fila: [ "; 
  for (int i =primeiro; i < ultimo; i++)
  {
    cout << estrutura [i%max_itens] << " ";
  }
  cout << " ]\n"; 
  
}