#include <iostream>

using namespace std;

class Retangulo
{
private:
    int altura;
    int largura;
public:
    Retangulo(int altura, int largura)
    {
        this->altura = altura;
        this->largura = largura;
    }
    int getAltura()
    {
        return altura;
    }
};

int main()
{
    int a = 10;
    Retangulo r1 (10, 20);
    cout << "r1.altura = " << r1.getAltura() << endl;
}