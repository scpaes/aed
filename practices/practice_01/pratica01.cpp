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
    Veiculo veiculo1("Fusca");
    {
        Veiculo veiculo2("Brasilia");
        {
            Veiculo veiculo3("Gol");
        }
    }
}