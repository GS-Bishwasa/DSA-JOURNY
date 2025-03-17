#include <iostream>
using namespace std;
void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int minindex = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
            
        }
        swap(arr[i],arr[minindex]);
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int arr[5] = {13, 33, 10, 34, 15};
    SelectionSort(arr, 5);
    return 0;
}