#include <iostream>
#include "veiculo.h"

using namespace std;


int main(){
    // creating objects
    Veiculo *v1 = new Veiculo("Fusca");
    Veiculo *v2 = new Veiculo("Brasilia");
    Veiculo *v3 = new Veiculo("Opala");
    
    // deleting objects
    delete v1;
    delete v2;
    delete v3;

    //seting number of wheels
    v1->setNumRodas(4);
    v2->setNumRodas(4);

    //getting number of wheels
    cout << "Numero de rodas do " << v1->getNumRodas() << endl;
    cout << "Numero de rodas do " << v2->getNumRodas() << endl;
}