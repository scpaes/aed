#include<iostream>

using namespace std;

#include "veiculo.h"

int main()
{
    //Passo 3
    //Veiculo veiculo("Primeiro veículo");
    //Aereo aereo;
    //Terrestre terrestre("Primeiro veículo terrestre");
    //Aquatico aquatico;

    //Passo 9

    //Veiculo veiculo("veiculo 1");
    //Aereo aereo ("aereo 1");
    //Terrestre terrestre ("terrestre 1");
    //Aquatico aquatico ("aquatico 1");

    //Parte 3, passo 3 - passo 6
    Veiculo * terr, * aqua, * aereo;
    terr = new Terrestre("VT1");
    ((Terrestre *)terr)->setCapacidadePass(45);
    aqua = new Aquatico("VQ1");
    ((Aquatico *)aqua)->setCargaMax(12.5);
    aereo = new Aereo("VA1");
    ((Aereo *)aereo)->setVelMax(1040.5);

    cout << "Terrestre.cap_pass" << ((Terrestre *)terr)-> getCapacidadePass() << endl;
    cout << "Aquatico.carga_max" << ((Aquatico *)aqua)-> getCargaMax() << endl;


    terr -> mover();
    aqua -> mover();
    aereo -> mover();

    delete terr;
    delete aqua;
    delete aereo;
    return 0;
}

