//
// Created by scpaes on 9/21/23.
//

#ifndef PRACTICE_03_FUNCOES_H
#define PRACTICE_03_FUNCOES_H

#include <cstring>

namespace funcoes{
    template<class T>
    void trocar(T &a, T &b) {
        /* troca valores de a e b entre si */
        int temp = a;
        a = b;
        b = temp;
    }

    template<class T>
    T maximo(T a, T b) {
        /* retorna maior entre a e b */
        return (a > b) ? a : b;
    }

    template<>
    const char *maximo(const char *a, const char *b) {
        /* retorna maior entre a e b */
        return (strcmp(a, b) > 0) ? a : b;
    }

    template<class T>
    T minimo(T a, T b) {
        /* retorna menor entre a e b */
        return (a > b) ? b : a;
    }
    template<>
    const char *minimo(const char *a, const char *b) {
        /* retorna menor entre a e b */
        return (strcmp(a, b) > 0) ? b : a;
    }
}

#endif //PRACTICE_03_FUNCOES_H
