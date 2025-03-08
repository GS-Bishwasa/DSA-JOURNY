#include<iostream>
using namespace std;
int sum(int arr[],int n){
    int a=0;
    for (int i = 0; i < n; i++)
    {
        a=a+arr[i];
    }
  return a;  
}
int main(){
int arr[5]={1,2,3,4,5};

cout<<sum(arr,5);

return 0;
}