//
// Created by scpaes on 11/17/23.
//

#ifndef PRAICA04_FILA_H
#define PRAICA04_FILA_H

template<class T>
class Fila {
private:
// array de itens, capacidade, tamanho, posição inicial, etc.
    T *items;
    int capacidade;
    int tamanho;
    int inicio;
public:
    Fila(int cap) {
        this->capacidade = cap;
        this->tamanho = 0;
        this->inicio = 0;
        this->items = new T[cap];
    }

    ~Fila() {
// destruir array de itens
        delete[] this->items;
    }

    void enfileira(const T &item) {
// adiciona um item ao final da fila; lança “Fila cheia” caso cheia
        if (this->tamanho == this->capacidade) {
            throw "Fila cheia";
        }
        this->items[(this->inicio + this->tamanho++) % this->capacidade] = item;
    }

    T desenfileira() {
// remove um item do inicio da fila; lança “Fila vazia” caso vazia
        if (this->tamanho == 0) {
            throw "Fila vazia";
        }
        T item = this->items[this->inicio];
        this->inicio = (this->inicio + 1) % this->capacidade;
        this->tamanho--;
        return item;
    }

    int cheia() {
// retorna 1 se cheia, 0 caso contrário
        return this->tamanho == this->capacidade;
    }

    int vazia() {
// retorna 1 se vazia, 0 caso contrário
        return this->tamanho == 0;
    }

    int get_num_itens() {
// retorna a quantidade de itens atualmente na fila
        return this->tamanho;
    }
};

#endif //PRAICA04_FILA_H
