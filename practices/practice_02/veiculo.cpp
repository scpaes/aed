//
// Created by scpaes on 9/20/23.
//
#include "iostream"
#include "veiculo.h"

using namespace std;

// Veiculo methods implementation
Veiculo::Veiculo(const char *nome) : nome(nome) {
    cout << "Veiculo com o nome " << nome << " criado" << endl;
}

Veiculo::~Veiculo() {
    cout << "Veiculo com o nome " << nome << " destruido" << endl;
}

// Terrestre methods implementation
//Terrestre::Terrestre(const char *nome) : Veiculo(nome) {
//    cout << "Veiculo terrestre com o nome " << nome << " criado" << endl;
//}
//
//Terrestre::~Terrestre() {
//    cout << "Veiculo terrestre com o nome " << nome << " destruido" << endl;
//}
//
// Aquatico methods implementation
//Aquatico::Aquatico(const char *nome) : Veiculo(nome) {
//    cout << "Veiculo aquatico com o nome " << nome << " criado" << endl;
//}
//
//Aquatico::~Aquatico() {
//    cout << "Veiculo aquatico com o nome " << nome << " destruido" << endl;
//}
//
// Aerio methods implementation
//Aerio::Aerio(const char *nome) : Veiculo(nome) {
//    cout << "Veiculo aerio com o nome " << nome << " criado" << endl;
//}
//
//Aerio::~Aerio() {
//    cout << "Veiculo aerio com o nome " << nome << " destruido" << endl;
//}