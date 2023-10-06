//
// Created by scpaes on 9/21/23.
//

#include <iostream>
#include "veiculo.h"

using namespace std;

// constructor implementation Veiculo class
Veiculo::Veiculo(const char *param) : nome(param), rodas(nullptr), numeroDeRodas(0) {
    cout << "Objeto com o nome " << this->nome << " criado" << endl;
}

// destructor implementation
Veiculo::~Veiculo() {
    cout << "Objeto com o nome " << this->nome << " destruido" << endl;
    delete[] rodas;
}

// getter and setter methods implementation
void Veiculo::setNumRodas(int num) {
    delete[] rodas;
    this->numeroDeRodas = num;
    // Allocate memory for the new array of pointers to Roda objects
    rodas = new Roda[num];
}

int Veiculo::getNumRodas() {
    return this->numeroDeRodas;
}

// constructor implementation Roda class
Roda::Roda() {
    cout << "Objeto do tipo roda criado" << endl;
}

Roda::~Roda() {
    cout << "Objeto do tipo roda destruido" << endl;
}