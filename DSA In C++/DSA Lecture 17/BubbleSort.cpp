#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n){
for (int i = 0; i < n-1; i++)
{
    for (int j = 0; j < n-i-1; j++)
    {
        if (arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
        
    }
    
}
for (int i = 0; i < n; i++)

{
    cout<<arr[i]<<" ";
}

}

int main(){
int arr[6]={10,1,7,6,14,9};
BubbleSort(arr,6);
return 0;
}