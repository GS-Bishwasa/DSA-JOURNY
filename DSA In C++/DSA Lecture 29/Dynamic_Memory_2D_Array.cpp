#include <iostream>
using namespace std;
int main()
{
    // //Creating Dynamic 2D Array (Same No. Row And Col)
    // int n;
    // cin >> n;

    // int **arr = new int *[n];
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = new int[n];
    // }

    // // Insert values of array
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // // Printing values of array
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // For Differnet Row And Cols
    // Creating Dynamic 2D Array
    int row;
    cin >> row;

    int col;
    cin >> col;

    int **arr = new int *[col];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // Insert values of array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing values of array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Remember when you using heap memory, after your work is done you have to clean memory manually, in this case of 2D Array we have to clean memory from each index of array,
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i]; // use delete[] for arrays
    }
    delete[] arr;

    return 0;
}