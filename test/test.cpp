#include <iostream>

using namespace std;
#define PRINT(M) cout << M << " ";

class A
{
public:
    A() { PRINT("A+"); }
    ~A() { PRINT("A-"); }
};

class B
{
private:
    A *a;

public:
    B()
    {
        PRINT("B+");
        a = new A;
    }
    ~B()
    {
        PRINT("B-");
        delete a;
    }
};

class C : B
{
public:
    C() : B() { PRINT("C+"); }
    ~C() { PRINT("C-"); }
};

int main()
{
    B *b = new B;
    C c;
}