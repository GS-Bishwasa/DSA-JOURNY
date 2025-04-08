#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
     vector<int> result;
    //Write your code here
for(int col = 0;col<mCols;col++){

    if(col%2==0){
        int row = 0;
        while(row<nRows){
        result.push_back(arr[row][col]);
        row++;
}

}else{
    int row = nRows -1;

    while(row>=0){
     result.push_back(arr[row][col]);
     row--;
    }
}
    
}
return result;
}


int main(){

    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int nRows = 3;
    int mCols = 4;

    vector<int> wave = wavePrint(arr, nRows, mCols);
for(int val:wave){
cout<<val<<" ";
}

return 0;
}