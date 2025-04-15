#include <iostream>
using namespace std;
int main()
{

    int num = 5;
    char ch = 'a';
    double d = 15.7;
    // cout<<num;

    // Address of Operator --> &  (Isse aap variable ka address dekh sakte hain, Yani Kis Address pe variable Mapped Hai)
    cout << "Address Of num is ->" << &num << endl;

    int *ptr = &num;
    // OR
    int *q = 0;
    q = &num;

    char *p = &ch;
    double *dbl = &d;
    // Here * Is Dereference Operator
    cout << *ptr << endl;
    cout << *q << endl;
    cout << *p << endl;
    cout << *dbl << endl;

    // Copying a Pointer
    int *r = q;
    cout << endl
         << "Copying a Pointer -->" << *r << endl;

    // Pointer Arithmatic
    int *t = &num;
    cout<<endl << *t << endl;
    cout << "Before t=t+1; -->" << t << endl;
    t = t + 1;
    cout << "After t=t+1; -->" << t << endl;

    return 0;
}