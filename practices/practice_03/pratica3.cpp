#include <iostream>
#include "funcoes.h"


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
    return 0;
}
