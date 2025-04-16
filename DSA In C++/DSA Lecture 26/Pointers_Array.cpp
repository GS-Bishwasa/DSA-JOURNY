#include <iostream>
using namespace std;
int main()
{

    // name of the array tells the address of the first memory block of that array
    int arr[10];
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

    return 0;
}