//
// Created by scpaes on 11/17/23.
//

#ifndef PRAICA04_POLONESA_H
#define PRAICA04_POLONESA_H

#include "pilha.h"

int ehOperador(char token);

int avalia(char token, int valorEsq, int valorDir);

int polonesa(const char *exp);

int mainPolonesa();

#endif //PRAICA04_POLONESA_H
