#include <iostream>
using namespace std;

int binaryser(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    // int mid = (start + end) / 2;
    int mid = start+(end-start)/2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        // mid = (start + end) / 2;
        mid = start+(end-start)/2;
    }
    return -1;
}

int main()
{
    int even[6] = {1, 2, 3, 4, 5, 6};
    int odd[5] = {1, 2, 3, 4, 5};
    cout<<binaryser(odd, 5, 1);
    return 0;
}