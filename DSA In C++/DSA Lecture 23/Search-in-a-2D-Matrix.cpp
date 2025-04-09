#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();

    int s = 0;
    int e = row * col - 1;
    int mid = s + (e - s) / 2;
    while (s <= e) {
        int element = matrix[mid / col][mid % col];

        if (element == target) {
            return 1;
        }
        if (element > target) {
            e = mid-1;
        }
        if (element < target) {
            s = mid+1;
        }
        mid = s + (e - s) / 2;
    }
    return 0;
}

int main(){
    vector<vector<int>> arr = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
int target = 3;
cout<<searchMatrix(arr,target);

return 0;
}