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
Terrestre::Terrestre(const char *nome) : Veiculo(nome), cap_pass(5) {
    cout << "Veiculo terrestre com o nome " << nome << " criado" << endl;
}

Terrestre::Terrestre() : Veiculo("Terrestre default value"), cap_pass(5) {}

Terrestre::~Terrestre() {
    cout << "Veiculo terrestre com o nome " << nome << " destruido" << endl;
}

int Terrestre::get_cap_pass() {
    return cap_pass;
}

void Terrestre::set_cap_pass(int cap_pass) {
    this->cap_pass = cap_pass;
}

void Terrestre::mover() {
    cout << "Veiculo terrestre com o nome " << nome << " se movendo" << endl;
}

// Aquatico methods implementation
Aquatico::Aquatico(const char *nome) : Veiculo(nome), carga_max(10) {
    cout << "Veiculo aquatico com o nome " << nome << " criado" << endl;
}

Aquatico::Aquatico() : Veiculo("Aquatico default value"), carga_max(10) {}

Aquatico::~Aquatico() {
    cout << "Veiculo aquatico com o nome " << nome << " destruido" << endl;
}

float Aquatico::get_carga_max() {
    return carga_max;
}

void Aquatico::set_carga_max(float carga_max) {
    this->carga_max = carga_max;
}

void Aquatico::mover() {
    cout << "Veiculo aquatico com o nome " << nome << " se movendo" << endl;
}

// Aerio methods implementation
Aerio::Aerio(const char *nome) : Veiculo(nome), vel_max(100) {
    cout << "Veiculo aerio com o nome " << nome << " criado" << endl;
}

Aerio::~Aerio() {
    cout << "Veiculo aerio com o nome " << nome << " destruido" << endl;
}

float Aerio::get_vel_max() {
    return vel_max;
}

void Aerio::set_vel_max(float vel_max) {
    this->vel_max = vel_max;
}

void Aerio::mover() {
    cout << "Veiculo aerio com o nome " << nome << " se movendo" << endl;
}

// Anfibio methods implementation
Anfibio::Anfibio(const char *nome) : Veiculo(nome), Terrestre(), Aquatico() {
    cout << "Veiculo anfibio com o nome " << nome << " criado" << endl;
}

Anfibio::~Anfibio() {
    cout << "Veiculo anfibio com o nome " << nome << " destruido" << endl;
}

void Anfibio::mover() {
    Terrestre::mover();
    Aquatico::mover();
    cout << "Veiculo anfibio com o nome " << nome << " se movendo" << endl;
}