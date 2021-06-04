#include <iostream>

using namespace std;

class Veiculo
{
protected:
    string nome;
private:
    /* data */
public:
    Veiculo(const char *nome);
    virtual ~Veiculo();
    virtual void mover();
};


class Terrestre : public Veiculo
{
private:
    int cap_pass = 5;
public:
    Terrestre(const char *nome);
    virtual ~Terrestre();

    int getCapacidadePass();
    void setCapacidadePass(int cap_pass);
    void mover();
};

class Aquatico : public Veiculo
{
private:
    float carga_max = 10;
public:
    Aquatico(const char *nome);
    virtual ~Aquatico();

    float getCargaMax();
    void setCargaMax(float carga_max);
    void mover();
};

class Aereo : public Veiculo
{
private:
    float vel_max = 100;
public:
    Aereo(const char *nome);
    virtual ~Aereo();

    float getVelMax();
    void setVelMax(float vel_max);
    void mover();
};
