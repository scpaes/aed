#ifndef VEICULO_H
#define VEICULO_H

using namespace std;

class Veiculo{
    private:
        string nome;
        int numeroDeRodas;

    public:
        // constructor and destructor methods
        Veiculo(const char *param);
        ~Veiculo();

        // getter and setter methods
        void setNumRodas(int num);
        int getNumRodas();
};

#endif