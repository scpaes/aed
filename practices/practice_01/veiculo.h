#ifndef VEICULO_H
#define VEICULO_H

using namespace std;

class Roda{
    public:
        // constructor and destructor methods
        Roda();
        ~Roda();
};

class Veiculo{
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

#endif