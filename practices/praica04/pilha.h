//
// Created by scpaes on 11/3/23.
//

#ifndef PRAICA04_PILHA_H
#define PRAICA04_PILHA_H

template<class T>
class Pilha {
private:
// Atributos para array de items, capacidade e topo da pilha
    T *items;
    int capacidade;
    int topo;
public:
    Pilha(int capacidade) {
        // instancia array de items, inicializa capacidade e topo
        this->capacidade = capacidade;
        this->topo = -1;
        this->items = new T[capacidade];
    }

    ~Pilha() {
        // destroy array de items
        delete[] this->items;
    }

    void empilha(T item) {
        // empilha um item no topo da pilha; lança “Estouro da pilha” se cheia
        if (this->topo == this->capacidade - 1) {
            throw "Estouro da pilha";
        }
        this->items[++this->topo] = item;
    }

    T desempilha() {
        // remove um item do topo da pilha; lança “Pilha vazia” se vazia
        if (this->topo == -1) {
            throw "Pilha vazia";
        }
        return this->items[this->topo--];
    }

    int tamanho() {
        // retorna o número de elementos na pilha.
        return this->topo + 1;
    }
};


#endif //PRAICA04_PILHA_H
