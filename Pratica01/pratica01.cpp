#include <iostream>

#include "veiculo.h"

using namespace std;


int main()
{
    //Até a questão 5.
    /* 
    cout << "Primeira aplicação C++" << endl;

    {
        Veiculo veiculo1("v1");
        {
            Veiculo veiculo2("v2");
            {
                Veiculo veiculo3("v3");
            }
        }
    }
    return 0;
    */

    //Questão 6 Veiculo * obj1 = new Veiculo("v1");
    {
        Veiculo * veiculo1 = new Veiculo("v1");
        veiculo1->setNumRodas(4);
        cout << "O numero de rodas é: "<< veiculo1->getNumRodas() << endl;
        delete(veiculo1);
        {
            Veiculo * veiculo2 = new Veiculo("v2");
            delete(veiculo2);
            {
                Veiculo * veiculo3 = new Veiculo("v3");
                delete(veiculo3);
            }
        }
    }
}
