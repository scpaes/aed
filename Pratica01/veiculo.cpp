#include "veiculo.h"
//<tipo> Classe::metodo(<parametros>) { <corpo> }

Roda::Roda(/* args */)
{
    cout << "Um novo objeto RODA foi construído " << endl;
}

Roda::~Roda()
{
    cout << "Um objeto RODA foi destruído. " << endl;
}


int Veiculo::getNumRodas()
{
    return num_rodas;
}

void Veiculo::setNumRodas(int num_rodas)
{
    this -> num_rodas = num_rodas;
    this->rodas[num_rodas] = {};
}

Veiculo::Veiculo(const char *nome)
{
    this->nome = string(nome);
    this->rodas = NULL;
    cout << "Um novo objeto foi construído " << nome << endl;
}
Veiculo::~Veiculo()
{
    cout << "Um objeto foi destruído. " << nome << endl;
    delete [] rodas;
}
