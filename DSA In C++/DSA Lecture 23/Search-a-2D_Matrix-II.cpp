#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex = 0;
    int colIndex = col - 1;

    while (rowIndex < row && colIndex >= 0) {
        int element = matrix[rowIndex][colIndex];

        if (element == target) {
            return 1;
        }
        if (element > target) {
            colIndex--;
        }
        if (element < target) {
            rowIndex++;
        }
    }
    return 0;
}


int main(){

    vector<vector<int>> arr = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 10;
    cout<<searchMatrix(arr,target);

return 0;
}