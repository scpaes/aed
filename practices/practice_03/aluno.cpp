//
// Created by scpaes on 9/21/23.
//
#include "iostream"
#include "aluno.h"

Aluno::Aluno(const char *nome, const char *mat) : nome(nome), mat(mat) {}

template<>
void Arranjo<Aluno>::set(int idx, const Aluno &aluno) {
    if (idx < 0 || idx >= this->tamanho) {
        throw IndiceInvalido();
    }
    this->items[idx] = aluno;
};

template<>
void Arranjo<Aluno>::exibir() {
    for (int i = 0; i < this->tamanho; i++) {
        std::cout << i << ": " << this->items[i].nome << " - " << this->items[i].mat << std::endl;
    }
};
