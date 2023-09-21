//
// Created by scpaes on 9/21/23.
//

#ifndef PRACTICE_03_ARRANJO_H
#define PRACTICE_03_ARRANJO_H

#include "iostream"
#include "IndiceInvalido.h"

template<class T>
class Arranjo {
private:
    int tamanho;
    T *items;
public:
    Arranjo(int tam) : tamanho(tam), items(new T[tam]) {}

    virtual ~Arranjo() {
        delete[] items;
    }

    virtual T get(int idx) {
        if (idx < 0 || idx >= tamanho) {
            throw IndiceInvalido();
        }
        return items[idx];
    }

    virtual void set(int idx, const T &item) {
        if (idx < 0 || idx >= tamanho) {
            throw IndiceInvalido();
        }
        items[idx] = item;
    }

    [[noreturn]] virtual void exibir();
};

template<class T>
[[noreturn]] void Arranjo<T>::exibir() {
    for (int i = 0; i < tamanho; i++) {
        std::cout << i << ": " << items[i] << std::endl;
    }
}

#endif //PRACTICE_03_ARRANJO_H
