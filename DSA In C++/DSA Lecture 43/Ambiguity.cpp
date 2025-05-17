#include<iostream>
using namespace std;
// Inheritance Ambiguity (If class c inherit from Class A, And B And These Classes Have Same Named Functions Then How Can We Access Particular functions, Here is The Answer "Ambiguity" :- obj.A::func();  )
class A {
    public:

    void func() {
        cout << " I am A" << endl;
    }
};

class B {
    public:

    void func() {
        cout << " I am B" << endl;
    }
};

class C: public A, public B {


};

int main() {

    C obj;
    //obj.func();

    obj.A::func();
    obj.B::func();

    return 0;
}