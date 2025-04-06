#include <iostream>
#include <vector>
using namespace std;

vector<int> findInter(int arr1[], int n, int arr2[], int m)
{

    vector<int> ans;

    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{
    int arr1[5] = {1, 2, 3, 3, 4};
    int arr2[2] = {3, 4};
    cout << (arr1, 5, arr2, 2);
    return 0;
}