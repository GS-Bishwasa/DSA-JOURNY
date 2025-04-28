#include<iostream>
using namespace std;

// Default argument always start from right most parameter(argument), you cant make "int n" a default argument without making "int start" a default argument
void print(int arr[], int n  , int start = 0) {

    for(int i = start; i<n; i++) {
        cout << arr[i] << endl;
    }

}

int main() {

    int arr[5] = {1,4,7,8,9};
    int size = 5;

    print(arr, size);
    cout << endl;
    print(arr, size, 2);


    return 0;
}