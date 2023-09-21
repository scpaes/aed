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

    Veiculo *terr = new Terrestre("VT1");
    ((Terrestre *) terr)->set_cap_pass(45);

    Veiculo *aqua = new Aquatico("VQ1");
    ((Aquatico *) aqua)->set_carga_max(12.5);

    Veiculo *aereo = new Aerio("VA1");
    ((Aerio *) aereo)->set_vel_max(1040.5);
}