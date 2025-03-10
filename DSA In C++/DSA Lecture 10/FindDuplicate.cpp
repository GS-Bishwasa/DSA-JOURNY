#include<iostream>
using namespace std;

int FindDuplicate(int arr[],int n){
int ans =0;
    for (int i = 0; i < n; i++)
{
    ans=ans^arr[i];
}
    for (int i = 0; i < n-1; i++)
{
    ans=ans^arr[i];
}
return ans;
}

int main(){
int arr[5]={1,2,3,5,5};
cout<<FindDuplicate(arr,5);
return 0;
}