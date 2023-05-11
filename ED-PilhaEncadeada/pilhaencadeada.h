typedef int tipoItem;

struct Node
{
    tipoItem valor; 
    Node* next;
}; 

class pilhaencadeada
{
    private:
        Node* topNode;
    public:
        pilhaencadeada();
        ~pilhaencadeada();
        bool isfull();
        bool isEmpty();
        void insert(tipoItem item);
        tipoItem remove();
        void print();
};
