#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; ++i)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    return matrix;
}

int main()
{

    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> ans = rotate(arr);

    for (vector<int> row : ans)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl; 
    }
    return 0;
}