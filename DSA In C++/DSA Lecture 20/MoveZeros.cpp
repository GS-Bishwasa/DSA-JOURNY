#include<iostream>
using namespace std;

void movezero(int arr[],int n){
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
int arr[6]={0,1,0,3,12,0};
movezero(arr,6);
return 0;
}