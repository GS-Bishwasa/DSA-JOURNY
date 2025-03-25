#include <iostream>
#include <vector>
using namespace std;

// void reversearr(int arr[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     while (s <= e)
//     {
//         swap(arr[s], arr[e]);
//         s++;
//         e--;
//     }


//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }


vector<int> reverse(vector<int> v){
    int s = 0;
    int e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }


   return v;
}


void print(vector<int> v){
    for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
}


int main()
{

vector<int> arr1;
arr1.push_back(11);
arr1.push_back(7);
arr1.push_back(3);
arr1.push_back(12);
arr1.push_back(4);

vector<int> ans = reverse(arr1);
print(ans);


    // int arr[5] = {1, 2, 3, 4, 5};
    // reversearr(arr, 5);
    return 0;
}