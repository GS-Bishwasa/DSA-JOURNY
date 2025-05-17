#include<iostream>
using namespace std;
//Hybrid Inheritance:- Combination of more than 1 type of Inheritance (ex:- here Hierarchical and Singal Combined)
class A {

    public:
    void func1() {
        cout << "Inside Funcion 1" << endl;
    }

};

class B: public A {
    public:
    void func2() {
        cout << "Inside Funcion 2" << endl;
    }
};

class D {

    public:
    void func4() {
        cout << "Inside Funcion 4" << endl;
    }

};

class C: public A, public D{
    public:
    void func3() {
        cout << "Inside Funcion 3" << endl;
    }
};

int main() {

    A object1;
    object1.func1();

    B object2;
    object2.func1();
    object2.func2();

    C object3;
    object3.func1();
    object3.func3();
    object3.func4();

    return 0;
}