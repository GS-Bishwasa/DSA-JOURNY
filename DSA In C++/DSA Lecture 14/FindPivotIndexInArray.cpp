#include <iostream>
using namespace std;

int FindPivot(int arr[], int n)
{
    int sum = 0;
    int lsum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        sum -= arr[j];
        if (sum == lsum)
        {
            return j;
        }
        lsum += arr[j];

       
    }
    return 0;
}

int main()
{
    int arr[6] = {1, 7, 3, 6, 5, 6};
    cout << FindPivot(arr, 6);
    return 0;
}