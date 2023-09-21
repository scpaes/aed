#include <iostream>
#include <string>

using std::string;
using namespace std;

class Prefeitura {
public:
    void setNome(string nome) {
        this->nome = nome;
    };

    void setAno(int ano);

    string getNome() {
        return nome;
    }

    int getAno();

private:
    string nome;
    int ano;
};

//int main() {
//    Prefeitura prefeitura;
//    prefeitura.setNome("Prefeitura de São Paulo");
//    cout << prefeitura.getNome() << endl;
//    return 0;
//}
