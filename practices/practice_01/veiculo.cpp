#include <iostream>
#include "veiculo.h"

using namespace std;

// constructor implementation
Veiculo::Veiculo(const char *param){
    this->nome = string(param);
    cout << "Objeto com o nome" << this->nome << "criado" << endl;
}

// destructor implementation
Veiculo::~Veiculo(){
    cout << "Objeto com o nome" << this->nome << "destruido" << endl;
}

// getter and setter methods implementation
void Veiculo::setNumRodas(int num){
    this->numeroDeRodas = num;
}

int Veiculo::getNumRodas(){
    return this->numeroDeRodas;
}