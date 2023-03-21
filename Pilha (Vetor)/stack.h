typedef int tipoItem;
const int max_itens = 100; 

class pilha {
    private: 
    int tamanho;
    tipoItem* estrutura;

    public:
    pilha(); 
    ~pilha();
    bool estaCheia(); 
    bool estaVazia(); 
    void inserir(tipoItem item); // push 
    tipoItem remover(); // pop
    void imprimir(); //print
    int qualTamanho(); //lenght
};