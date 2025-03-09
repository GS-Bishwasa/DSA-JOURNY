#include<iostream>
using namespace std;
void FindUnique(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
        if (arr[i]==arr[j])
        {
           
        }else{
            cout<< arr[i];
        }
        
       }
       
    }
    
}
int main(){
int arr[5]={1,1,2,2,3};
FindUnique(arr,5);

return 0;
}