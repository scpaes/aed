#include <iostream>
#include "funcoes.h"
#include "arranjo.h"
#include "aluno.h"


using namespace std;
using namespace funcoes;

int main() {
    // int x = 5, y = 10, z = 30;
    float x = 5.5, y = 10.15, z = 30.7;
    cout << "Antes: x = " << x << " y = " << y << endl;
    trocar(x, y);
    cout << "Depois : x = " << x << " y = " << y << endl;
    cout << "Minimo entre " << x << " e " << y << ": " << minimo(x, y) << endl;
    cout << "Maximo entre " << y << " e " << z << ": " << maximo(y, z) << endl;

    // minimo and maximo with strings
    const char *a = "StringA", *b = "StringB";
    cout << "Minimo entre strings " << a << " e " << b << ": " << minimo(a, b) << endl;
    cout << "Maximo entre strings " << a << " e " << b << ": " << maximo(a, b) << endl;

    Arranjo<int> arr(10);
    arr.set(4, 5);
    arr.set(7, 15);
    arr.set(8, 22);
    arr.exibir();

    Arranjo<float> arr2(10);
    arr2.set(4, 5.5);
    arr2.set(7, 15.15);
    arr2.set(8, 22.22);
    arr2.exibir();

    try {
        arr.get(10);
    } catch (IndiceInvalido &e) {
        cout << e.what() << endl;
    }

    Arranjo<Aluno> turma(3);
    turma.set(0, Aluno("Joao", "1234"));
    turma.set(1, Aluno("Maria", "5235"));
    turma.set(2, Aluno("Jose", "2412"));
    turma.exibir();

    return 0;
}
