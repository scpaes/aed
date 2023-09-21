//
// Created by scpaes on 9/21/23.
//

#ifndef PRACTICE_01_VEICULO_H
#define PRACTICE_01_VEICULO_H

using namespace std;

class Roda {
public:
    // constructor and destructor methods
    Roda();

    ~Roda();
};

class Veiculo {
private:
    string nome;
    int numeroDeRodas;
    Roda *rodas;

public:
    // constructor and destructor methods
    Veiculo(const char *param);

    ~Veiculo();

    // getter and setter methods
    void setNumRodas(int num);

    int getNumRodas();
};

#endif //PRACTICE_01_VEICULO_H
