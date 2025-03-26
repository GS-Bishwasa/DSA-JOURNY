#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[],int m,int arr2[],int n,int arr3[]){
    int i = 0;
    int j = 0;
    int k = 0;
while(i<m && j<n){
        if (arr[i]<arr2[j])
        {
            arr3[k]=arr[i];
            k++;
            i++;
        }else{
            arr3[k]=arr2[j];
            k++;
            j++;

        }
        
        
    }
    // copy first array k element ko
    while (i<m)
    {
        arr3[k]= arr[i];
        k++;
        i++;
    }


    // copy kardo second array ke remaining elements ko
    while (j<n)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }


    
    
    
}
void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int arr[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};
    int arr3[8] = {0};

    merge(arr,5,arr2,3,arr3);
    print(arr3,8);

    return 0;
}