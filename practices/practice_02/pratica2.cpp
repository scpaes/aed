#include "iostream"
#include "veiculo.h"

using namespace std;

int main() {
//    Veiculo *terr, *aqua, *aereo;
//    terr = new Terrestre("VT1");
//    terr->setCapacidadeMax(45);
//    aqua = new Aquatico("VQ1");
//    aqua->setCargaMax(12.5);
//    aereo = new Aereo("VA1");
//    aereo->setVelocidadeMax(1040.5);

//    Veiculo *terr = new Terrestre("VT1");
//    ((Terrestre *) terr)->set_cap_pass(45);
//    terr->mover();
//
//    Veiculo *aqua = new Aquatico("VQ1");
//    ((Aquatico *) aqua)->set_carga_max(12.5);
//
//    aqua->mover();
//
//    Veiculo *aereo = new Aerio("VA1");
//    ((Aerio *) aereo)->set_vel_max(1040.5);
//
//    aereo->mover();
//
//    delete terr;
//    delete aqua;
//    delete aereo;

    Veiculo *terr = new Terrestre("VT1");
    dynamic_cast<Terrestre *>(terr)->set_cap_pass(45);

    terr->mover();

    Veiculo *aqua = new Aquatico("VQ1");
    dynamic_cast<Aquatico *>(aqua)->set_carga_max(12.5);

    aqua->mover();

    Veiculo *aereo = new Aerio("VA1");
    dynamic_cast<Aerio *>(aereo)->set_vel_max(1040.5);

    aereo->mover();

    Veiculo *anfi = new Anfibio("VAF1");
    anfi->mover();

    delete terr;
    delete aqua;
    delete aereo;
    delete anfi;
}