#include <iostream>

using namespace std;

class ListaOrdenada {
private:
    int *items;
    int tamanho, capacidade;
public:
    ListaOrdenada(int cap) {
        this->capacidade = cap;
        this->tamanho = 0;
        items = new int[cap];
    }

    ~ListaOrdenada() {
        delete[] items;
    }

    void insere(int item) {
        if (this->tamanho == this->capacidade) {
            throw "ERRO: Lista cheia.";
        }

        if (this->tamanho == 0) {
            this->tamanho++;
            this->items[0] = item;
        } else {
            int i = this->tamanho;
            this->tamanho++;

            while (i > 0 && item < this->items[i - 1]) {
                this->items[i] = this->items[i - 1];
                i--;
            }
            this->items[i] = item;
        }
    }

    void remove(int item) {
        if (this->tamanho == 0) {
            throw "ERRO: Lista vazia.";
        }

        int indexItem = buscaBinaria(item);
        if (indexItem == -1) {
            throw "ERRO: Item não encontrado.";
        }
        for (int i = indexItem; i < this->tamanho - 1; i++) {
            this->items[i] = this->items[i + 1];
        }
        this->tamanho--;
    }

    int buscaSequencial(int key) {
        if (this->tamanho == 0) {
            return -1;
        } else {
            for (int i = 0; i < this->tamanho - 1; i++) {
                if (this->items[i] == key) {
                    return i;
                } else if (this->items[i] > key) {
                    return -1;
                }
            }
            return -1;
        }
    }

    int buscaBinaria(int item) {
        return buscaBinaria(0, this->tamanho - 1, item);
    }

    int valida() {
        for (int i = 0; i < tamanho - 1; i++) {
            if (items[i] > items[i + 1]) return 0;
        }
        return 1;
    }

    void exibe() {
        for (int i = 0; i < tamanho; i++) {
            cout << i << ": " << items[i] << "; ";
        }
        cout << endl;
    }

    int getTamanho() {
        return tamanho;
    }

private:

    int buscaBinaria(int inicio, int final, int item) {
        int meio = (inicio + final) / 2;
        int valorMeio = this->items[meio];

        if (inicio > final) {
            return -1;
        } else if (item == valorMeio) {
            return meio;
        } else if (valorMeio < item) {
            return buscaBinaria(meio + 1, final, item);
        } else {
            return buscaBinaria(inicio, meio - 1, item);
        }
    }
};


int mainOrdenada() {

    ListaOrdenada lista(10);

    int elementos[] = {10, 5, 25, 1, 64, 13, 50, 99, 33, 12};

    cout << "Testando inser��o ..." << endl;
    for (int i = 0; i < 10; i++) {
        lista.insere(elementos[i]);
    }

    cout << "Lista: ";
    lista.exibe();

    if (lista.getTamanho() == 10) {
        cout << "Tamanho OK." << endl;
    } else {
        cout << "ERRO: Tamanho errado (!= 10): " << lista.getTamanho() << endl;
        exit(1);
    }

    if (lista.valida()) {
        cout << "Lista est� ordenada." << endl;
    } else {
        cout << "ERRO: Lista n�o est� ordenada." << endl;
        exit(1);
    }

    cout << endl << "Testando remo��o..." << endl;
    try {
        lista.remove(5);
        lista.remove(50);
        lista.remove(33);
        lista.remove(-100); // erro
        cout << "ERRO: Exce��o n�o lan�ada na remo��o. Abortando." << endl;
        exit(1);
    } catch (...) {
        cout << "Exce��o lan�ada na remo��o." << endl;
    }

    cout << "Lista: ";
    lista.exibe();

    if (lista.getTamanho() == 7) {
        cout << "Tamanho OK." << endl;
    } else {
        cout << "ERRO: Tamanho errado (!= 7): " << lista.getTamanho() << endl;
        exit(1);
    }

    if (lista.valida()) {
        cout << "Lista est� ordenada." << endl;
    } else {
        cout << "ERRO: Lista n�o est� ordenada." << endl;
        exit(1);
    }

    cout << endl << "Testando buscas..." << endl;

    cout << "- Itens presentes: ";

    int bs10 = lista.buscaSequencial(10);
    int bb10 = lista.buscaBinaria(10);

    int bs25 = lista.buscaSequencial(25);
    int bb25 = lista.buscaBinaria(25);

    if ((bs10 == 1) && (bb10 == 1) && (bs25 == 4) && (bb25 == 4)) {
        cout << "OK" << endl;
    } else {
        cout << "ERRO" << endl;
        exit(1);
    }

    cout << "- Itens ausentes: ";

    int bs20 = lista.buscaSequencial(20);
    int bb20 = lista.buscaBinaria(20);

    int bs77 = lista.buscaSequencial(77);
    int bb77 = lista.buscaBinaria(77);

    if ((bs20 == -1) && (bb20 == -1) && (bs77 == -1) && (bb77 == -1)) {
        cout << "OK" << endl;
    } else {
        cout << "ERRO" << endl;
        exit(1);
    }

    cout << "- Itens removidos: ";

    int bs5 = lista.buscaSequencial(5);
    int bb5 = lista.buscaBinaria(5);

    int bs33 = lista.buscaSequencial(33);
    int bb33 = lista.buscaBinaria(33);

    if ((bs5 == -1) && (bb5 == -1) && (bs33 == -1) && (bb33 == -1)) {
        cout << "OK" << endl;
    } else {
        cout << "ERRO" << endl;
        exit(1);
    }

    return 0;
}