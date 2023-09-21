#include <iostream>
#include "funcoes.h"


using namespace std;

int main() {
    int x = 5, y = 10, z = 30;
    cout << "Antes: x = " << x << " y = " << y << endl;
    trocar(x, y);
    cout << "Depois : x = " << x << " y = " << y << endl;
    cout << "Minimo entre " << x << " e " << y << ": " << minimo(x, y) << endl;
    cout << "Maximo entre " << y << " e " << z << ": " << maximo(y, z) << endl;
    return 0;
}
