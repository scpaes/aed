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
    virtual void mover() = 0;
};

class Terrestre : public virtual Veiculo
{
protected:
    Terrestre() : Veiculo("Veículo terrestre")
    {

    }
private:
    int cap_pass = 5;
public:
    Terrestre(const char *nome);
    virtual ~Terrestre();

    int getCapacidadePass();
    void setCapacidadePass(int cap_pass);
    void mover();
};

class Aquatico : public virtual Veiculo
{
protected:
    Aquatico() : Veiculo("Veículo aquático")
    {   
    }
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

class Anfibio : public Terrestre, public Aquatico
{
private:
    /* data */
public:
    Anfibio (const char * nome) : Veiculo(nome), Terrestre(), Aquatico() {}
    virtual ~Anfibio();

    void mover();
};
