#include <iostream>
#include "pilhaencadeada.h"
#include <cstddef>

using namespace std;

pilhaencadeada::pilhaencadeada()
{
    topNode = NULL;
}
pilhaencadeada::~pilhaencadeada()
{
    Node* tempNode; 
    while (topNode != NULL){
        tempNode = topNode; 
        topNode = topNode->next;
        delete tempNode;
    }
}
bool pilhaencadeada::isfull()
{
    Node *newNode;
    try
    {
        newNode = new Node;
        delete newNode;
        return false;
    }
    catch (bad_alloc exception)
    {
        return true;
    }
}
bool pilhaencadeada::isEmpty()
{
    return topNode == NULL;
}
void pilhaencadeada::insert(tipoItem item)
{
    if(isfull()){
        cout << "A pilha esta cheia \n "; 
        cout << "Nao foi possivel inserir este elemento \n ";
    }
    else{
        Node* newNode = new Node;
        newNode-> valor = item; 
        newNode-> next = topNode;
        topNode = topNode;   

    }
}
tipoItem pilhaencadeada::remove()
{
    if(isEmpty()){
        cout << "A pilha esta vazia \n";
        cout << "Nenhum elemento removido \n";
        return 0; 
    }
    else{
        Node* tempNode; 
        tempNode = topNode;
        tipoItem item = topNode->valor;
        topNode = topNode->next; 
        delete tempNode;
        return item; 
    }
}
void pilhaencadeada::print()
{
    Node* tempNode = topNode;
    cout << "PILHA ENCADEADA{ ";
    while(tempNode != NULL){
        cout << tempNode->valor << " "; 
        tempNode = tempNode->next;
    }
    cout << "}\n"; 
}