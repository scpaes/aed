#include <iostream>

using namespace std;

#include "retangulo.h"

int main()
{
    int a = 10;
    //Instanciando um objeto retângulo de forma concreta na stack de execução da função main
    //Desta forma o objeto r1 é destruido sem a necessidade de utilizar o delete.
    //Retangulo r1 (10, 20);

    //Instanciando um objeto retângulo no heap usando o new()
    // O uso do -> é equivalente a (*r1).

    Retangulo *r1 = new Retangulo(10, 20);
    cout << "r1.altura = " << r1->getAltura() << endl;

    delete r1;
}