#include <iostream>

using namespace std;

class Veiculo{
    private:
        string nome;

    public:
        Veiculo(const char *param){
            this->nome = string(param);
            cout << "Objeto com o nome" << this->nome << "criado" << endl;
        }
        ~Veiculo(){
            cout << "Objeto com o nome" << this->nome << "destruido" << endl;
        }
};

int main(){
    // creating objects
    Veiculo *v1 = new Veiculo("Fusca");
    Veiculo *v2 = new Veiculo("Brasilia");
    Veiculo *v3 = new Veiculo("Opala");
    
    // deleting objects
    delete v1;
    delete v2;
    delete v3;
}