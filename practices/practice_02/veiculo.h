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

class Terrestre : public virtual Veiculo {
private:
    int cap_pass; // capacidade de passageiros
protected:
    Terrestre();

    ~Terrestre();

public:
    explicit Terrestre(const char *nome);

    int get_cap_pass();

    void set_cap_pass(int cap_pass);

    void mover();
};

class Aquatico : public virtual Veiculo {
private:
    float carga_max; // capacidade de carga
protected:
    Aquatico();

    ~Aquatico();

public:
    explicit Aquatico(const char *nome);

    float get_carga_max();

    void set_carga_max(float carga_max);

    void mover();
};

class Aerio : public Veiculo {
private:
    float vel_max; // velocidade maxima
public:
    explicit Aerio(const char *nome);

    virtual ~Aerio();

    float get_vel_max();

    void set_vel_max(float vel_max);

    void mover();
};

class Anfibio : public Terrestre, public Aquatico {
public:
    explicit Anfibio(const char *nome);

    ~Anfibio();

    void mover();
};

#endif //PRACTICE_02_VEICULO_H
