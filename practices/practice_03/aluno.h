//
// Created by scpaes on 9/21/23.
//

#ifndef PRACTICE_03_ALUNO_H
#define PRACTICE_03_ALUNO_H

#include "iostream"
#include "arranjo.h"

using namespace std;

class Aluno {
private:
    string nome;
    string mat;
public:
    Aluno() = default;

    Aluno(const char *nome, const char *mat);

    friend class Arranjo<Aluno>;

    template<>
    void Arranjo<Aluno>::set(int idx, const Aluno &aluno);

    template<>
    [[noreturn]] void Arranjo<Aluno>::exibir();
};


#endif //PRACTICE_03_ALUNO_H
