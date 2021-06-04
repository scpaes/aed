#include<iostream>

using namespace std;

class Ponto
{
private:
    /* data */
public:
    float x;
    float y;

    Ponto operator + (Ponto &p1);
    Ponto(float px, float py);
    ~Ponto();
};

Ponto Ponto::operator+(Ponto &p)
{
    return Ponto (x + p.x, y + p.y);
}

Ponto operator- (Ponto &p1, Ponto &p2)
{
    return Ponto(p1.x - p2.x, p1.y - p2.y);
}

Ponto::Ponto(float px, float py)
{
    this -> x = px;
    this -> y = py;
}

Ponto::~Ponto()
{
}

int main()
{
    return 0;
}