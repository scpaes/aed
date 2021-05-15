#ifndef VEICULO_H_
#define VEICULO_H_

#include <iostream>

using namespace std;

class Roda
{
private:
    /* data */
public:
    Roda(/* args */);
    ~Roda();
};


class Veiculo
{
private:
    Roda *rodas;
    string nome;
    int num_rodas;

public:
    Veiculo(const char *nome);
    ~Veiculo();

    int getNumRodas();
    
    void setNumRodas(int num_rodas);
    
};

#endif /* VEICULO_H_ */