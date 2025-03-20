#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n){
for (int i = 1; i < n; i++)
{
    int temp = arr[i];
    int j = i-1;
    for (; j >= 0; j--)
    {
        if (arr[j]>temp)
        {
            arr[j+1]=arr[j];
        }else{
            break;
        }
        
    }
    arr[j+1]=temp;
}

for (int k = 0; k < n; k++)
{
    cout<<arr[k]<<" ";
}

}

int main(){
int arr[4]={4,12,11,20};
InsertionSort(arr,4);
return 0;
}