#include<iostream>

class Retangulo
{
private:
    int altura;
    int largura;
public:
    Retangulo(int altura, int largura);
    ~Retangulo();
    int getAltura();
    int getLargura();
};