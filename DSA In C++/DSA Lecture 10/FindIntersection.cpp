#include<iostream>
using namespace std;

void findInter(int arr1[],int n,int arr2[],int p){
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < p; j++)
//     {

//         if (arr1[i]<arr2[j])
//             break;
        
//         if (arr1[i]==arr2[j])
//         {
//             cout<<arr2[j]<<" ";
//             arr2[j]=INT_MIN;
//             break;
//         }
        
//     }
    
// }

int i=0;
int j=0;
while (i<n && j<p)
{
    if(arr1[i]==arr2[j]){
        cout<<arr2[j];
        i++;
        j++;
    }
    else if(arr1[i]>arr2[j]){
        j++;
    }
    else{
        i++;
    }
}


}

int main(){
int arr1[5]={1,2,3,3,4};
int arr2[2]={3,4};
findInter(arr1,5,arr2,2);
return 0;
}