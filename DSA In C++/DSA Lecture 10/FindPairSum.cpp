#include<iostream>
using namespace std;
void PairSum(int arr[],int n,int s){
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[i]+arr[j]==s)
    //         {
    //             if (arr[i]<arr[j])
    //             {
                    
    //                 cout<<arr[i]<<" "<<arr[j]<<endl;
    //             }
                
    //         }
            
    //     }
        
    // }


    int i=0;
    int j=n-1;
    while (i<j)
    {
        if (arr[i]+arr[j]==s)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
                i++;
                j--;
               
                
            }else if((arr[i]+arr[j])<s)
            {
                i++;
               
            }
            // else{
            //     j--;
            // }
       
       
    }
    
    
}
int main(){
int arr[5]={1,2,3,4,5};
PairSum(arr,5,5);
return 0;
}