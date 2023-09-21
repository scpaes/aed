//
// Created by scpaes on 9/20/23.
//
#include "iostream"

using namespace std;

#ifndef PRACTICE_02_VEICULO_H
#define PRACTICE_02_VEICULO_H

class Veiculo {
protected:
    string nome;

public:
    Veiculo(const char *nome);

    ~Veiculo();
};

class Terrestre : public Veiculo {
public:
    Terrestre(const char *nome) : Veiculo(nome) {

    }

    ~Terrestre();
};

class Aquatico : public Veiculo {
public:
    Aquatico(const char *nome) : Veiculo(nome) {

    }

    ~Aquatico();
};

class Aerio : public Veiculo {
public:
    Aerio(const char *nome) : Veiculo(nome) {

    }

    ~Aerio();
};


#endif //PRACTICE_02_VEICULO_H
