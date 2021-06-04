#include<iostream>
#include "veiculo.h"

using namespace std;

Veiculo::Veiculo(const char *nome)
{
    this -> nome = string(nome);
    cout << "Objeto criado com o nome: " << nome <<endl;
}
Veiculo::~Veiculo()
{
    cout << "Destrutor veículo" << endl;
}
void Veiculo::mover()
{
    cout <<"Veiculo" << this->nome << "moveu" << endl;
}


Terrestre::Terrestre(const char *nome) : Veiculo(nome)
{
    this -> cap_pass = 5;
}
Terrestre::~Terrestre()
{
    cout << "Destrutor Terrestre" << endl;
}
int Terrestre::getCapacidadePass()
{
    return this->cap_pass;
}
void Terrestre::setCapacidadePass(int cap_pass)
{
    this -> cap_pass = cap_pass;
}
void Terrestre::mover()
{
    cout <<"Veiculo terrestre nome:" << this->nome << "moveu" << endl;
}


Aquatico::Aquatico(const char *nome) : Veiculo(nome)
{
    this -> carga_max = 10;   
}
Aquatico::~Aquatico()
{
    cout << "Destrutor aquatico" << endl;

}
float Aquatico::getCargaMax()
{
    return this -> carga_max;
}
void Aquatico::setCargaMax(float carga_max)
{
    this ->carga_max = carga_max;
}
void Aquatico::mover()
{
    cout <<"Veiculo aquatico nome: " << this->nome << "moveu" << endl;
}


Aereo::Aereo(const char *nome) : Veiculo(nome)
{
    this -> vel_max = 100;
}
Aereo::~Aereo()
{
    cout << "Destrutor aéreo" << endl;
}
float Aereo::getVelMax()
{
    return this -> vel_max;
}
void Aereo::setVelMax(float vel_max)
{
    this -> vel_max = vel_max;
}
void Aereo::mover()
{
    cout <<"Veiculo aéreo nome: " << this->nome << "moveu" << endl;
}


Anfibio::~Anfibio()
{
}
void Anfibio:: mover()
{
    Terrestre::mover();
    Aquatico::mover();
}