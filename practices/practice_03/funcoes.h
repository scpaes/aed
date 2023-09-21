//
// Created by scpaes on 9/21/23.
//

#ifndef PRACTICE_03_FUNCOES_H
#define PRACTICE_03_FUNCOES_H

void trocar(int &a, int &b) {
    /* troca valores de a e b entre si */
    int temp = a;
    a = b;
    b = temp;
}

int maximo(const int a, const int b) {
    /* retorna maior entre a e b */
    return (a > b) ? a : b;
}

int minimo(const int a, const int b) {
    /* retorna menor entre a e b */
    return (a > b) ? b : a;
}

#endif //PRACTICE_03_FUNCOES_H
