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

    virtual ~Veiculo();

    virtual void mover() = 0;
};

class Terrestre : public Veiculo {
private:
    int cap_pass; // capacidade de passageiros
public:
    Terrestre(const char *nome);

    virtual ~Terrestre();

    int get_cap_pass();

    void set_cap_pass(int cap_pass);

    void mover();
};

class Aquatico : public Veiculo {
private:
    float carga_max; // capacidade de carga
public:
    Aquatico(const char *nome);

    virtual ~Aquatico();

    float get_carga_max();

    void set_carga_max(float carga_max);

    void mover();
};

class Aerio : public Veiculo {
private:
    float vel_max; // velocidade maxima
public:
    Aerio(const char *nome);

    virtual ~Aerio();

    float get_vel_max();

    void set_vel_max(float vel_max);

    void mover();
};


#endif //PRACTICE_02_VEICULO_H
