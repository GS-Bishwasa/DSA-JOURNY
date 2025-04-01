#include<iostream>
using namespace std;


char toLowerCase(char ch) {
    if(ch >='a' && ch <='z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n-1;

    while(s<=e) {
        if(toLowerCase( a[s] ) != toLowerCase( a[e] ) )
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main(){

char arr[5]={'a','b','c','b','a'};
cout<<checkPalindrome(arr,5);


return 0;
}