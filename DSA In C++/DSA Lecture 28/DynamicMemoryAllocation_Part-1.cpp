#include<iostream>
using namespace std;

int getSum(int *arr, int n) {

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    } 
    return sum;
}

int main() {

    int n;
    cin >> n;
    
    // Memory Allocation Is of two types Stake And Heap Memory Allocation , F
    // or stack we do like "int i = 5;" , 
    // For Heap We have to use "new" keyword and use like, "new int;" 
    // In Heap we donot initilize a varible with a name, like i, a, arr, etc., But It Return Address Of The Variable
    // Then How We CAn Access The Varible, To Access We Have To USe Pointer As Heap Variable Return address.
    // Like This "int* arr = new int[5];"  ---> "8 Byte For Pointer, 20 (9X5) Byte For Heap Array = Total 28 Bytes"


    //variable size array
    int* arr = new int[n];

    //takign inputn in aray
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);

    cout << "answer is "<< ans << endl;

//case 1
    while(true) {
        int i = 5;
    }
    
//case 2
    while(true) {
        int* ptr = new int;
    }





return 0;
}