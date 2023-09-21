//
// Created by scpaes on 9/21/23.
//
#include <iostream>

using namespace std;

class A {

public:

    A() { cout << "A+" << " "; }

    ~A() { cout << "A-" << " "; }
};

class B {
private:
    A *a;
public:
    B() {
        cout << "B+" << " ";
        a = new A;
    }

    ~B() {
        cout << "B-" << " ";
        delete a;
    }
};

class C : public B {
public:

    C() : B() { cout << "C+" << " "; }


    ~C() { cout << "C-" << " "; }

};

int main() {
    C *c = new C;
    A a;
}
