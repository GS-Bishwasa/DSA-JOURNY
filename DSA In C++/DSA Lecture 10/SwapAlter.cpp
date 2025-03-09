#include <iostream>
using namespace std;

void SwapAlter(int arr[], int n)
{
    // int first=n;
    // int second=n;
    int i = 0;
   
        while (i < n-1 )
        {
            swap(arr[i], arr[i + 1]);
            i = i + 2;
        }
    
        

    for (int j = 0; j < n; j++)
    {
        cout << arr[j];
    }

    // return 0;
}
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
SwapAlter(arr, 5);
    return 0;
}