typedef int TipoItem; 
const int max_itens = 100;  

class fila{
    private: 
    int primeiro, ultimo; 
    TipoItem* estrutura;

    public:
    fila();

    ~fila(); 

    bool isEmpty();

    bool isFull();

    void inserir(TipoItem item);
      //enqueue 
    TipoItem remove();
     //dequeue
    void imprimir();
     //print 


};