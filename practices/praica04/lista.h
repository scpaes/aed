//
// Created by scpaes on 12/1/23.
//

#ifndef PRAICA04_LISTA_H
#define PRAICA04_LISTA_H

#include "iostream"

using namespace std;

template<class T>
class Lista {
private:
    T *items;
    int capacidade;
    int tamanho;
public:
    Lista(int capacidade) {
        this->capacidade = capacidade;
        this->tamanho = 0;
        this->items = new T[capacidade];
    }

    ~Lista() {
        delete[] this->items;
    }

    void adiciona(const T &item) {
        if (this->tamanho == this->capacidade) {
            throw "Lista cheia";
        }
        this->items[this->tamanho++] = item;
    }

    T pega(int idx) {
        if (idx < 1 || idx > this->capacidade) {
            throw "Item inválido";
        }
        return this->items[idx - 1];
    }

    void insere(int idx, const T &item) {
        if (this->tamanho == this->capacidade) {
            throw "Lista cheia";
        } else if (idx < 1 || idx > this->capacidade) {
            throw "Item inválido";
        } else if (idx > this->tamanho) {
            throw "Item inválido";
        }

        this->tamanho++;
        for (int i = this->tamanho; i > idx - 1; i--) {
            this->items[i] = this->items[i - 1];
        }
        this->items[idx - 1] = item;
    }

    void remove(int idx) {
        if (idx < 1 || idx > this->tamanho) {
            throw "Item inválido";
        }
        for (int i = idx - 1; i < this->tamanho; i++) {
            this->items[i] = this->items[i + 1];
        }
        this->tamanho--;
    }

    void exibe() {
        for (int i = 0; i < this->tamanho; ++i) {
            cerr << this->items[i] << " ";
        }
    }

    int get_tamanho() {
        return this->tamanho;
    }
};

#endif //PRAICA04_LISTA_H
