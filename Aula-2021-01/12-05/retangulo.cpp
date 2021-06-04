#include<iostream>
#include "retangulo.h"

using namespace std;

Retangulo::Retangulo(int altura, int largura)
    {
        this->altura = altura;
        this->largura = largura;

        cout<<"Retangulo criado" <<endl;
    }

Retangulo::~Retangulo()
{
    cout<<"Retangulo destruido"<<endl;
}

int Retangulo::getAltura()
    {
        return altura;
    }

int Retangulo::getLargura()
    {
        return this -> largura;
    }