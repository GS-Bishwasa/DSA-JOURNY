#include<iostream>
using namespace std;
void FindUnique(int arr[],int n){
//    Using XOR(^)
int ans =0;
for (int i = 0; i < n; i++)
{
    ans=ans^arr[i];
}

    cout<<ans;
}
int main(){
int arr[5]={1,1,2,2,3};
FindUnique(arr,5);

return 0;
}