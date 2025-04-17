#include <iostream>
using namespace std;
int main()
{

    // name of the array tells the address of the first memory block of that array
    /* int arr[10];
       cout << arr<<endl;
       // Address Using and(&) operator
       cout << &arr[0]<<endl;

       int arr1[3] = {10, 20, 30};
       cout << *arr1<<endl;
       cout << *arr1+1<<endl;
       cout << *(arr1+1)<<endl;
       cout << 0[arr1]<<endl;

       // arr[i] = *(arr+i)
       // i[arr] = *(i+arr)
   */

    /*
    int temp[10] = {1,2,3};
    int *p = &temp[0];
    cout<< sizeof(temp)<<endl;
    cout<< sizeof(*temp)<<endl;
    cout<< sizeof(&temp)<<endl;
    cout<< temp<<endl;
    cout<< sizeof(p)<<endl;
    cout<< sizeof(*p)<<endl;
    cout<< sizeof(&p)<<endl;
    cout<< p<<endl;
    */

/*
    int a[20] = {1, 2, 3, 5};
    cout << " ->" << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << "-> " << &p << endl;
    // & ---> address at
    // * ---> value at
*/

    int arr[10];
    // ERROR
    // arr = arr+1;

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    return 0;
}