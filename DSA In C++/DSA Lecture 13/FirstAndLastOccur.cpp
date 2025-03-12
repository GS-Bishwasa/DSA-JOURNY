#include <iostream>
using namespace std;

int FirstOccurence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {

        if (arr[mid] == key)
        {

            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int LastOccurence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    
    while (start <= end)
    {

        if (arr[mid] == key)
        {

            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 4};
    cout << FirstOccurence(arr, 5, 4)<<endl;
    cout << LastOccurence(arr, 5, 4);

    return 0;
}