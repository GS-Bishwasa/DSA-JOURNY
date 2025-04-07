#include<iostream>
using namespace std;


bool isPresent(int arr[][3], int target, int row, int col) {

    for(int row=0; row<3; row++) {
          for(int col=0; col<3; col++) {
              
              if( arr[row][col] == target) {
                  return 1;
              }
              
          }
      }
      return 0;
  }


  void printColSum(int arr[][3], int row, int col) {
    cout << "Printing Sum -> " << endl;
    for(int col=0; col<3; col++) {
        int sum = 0;
        for(int row=0; row<3; row++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    cout << endl;
}



int largestRowSum(int arr[][3], int row, int col) {

    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<3; col++) {
            sum += arr[row][col];
        }

        if(sum > maxi ) {
            maxi = sum;
            rowIndex = row;
        }
       
    }

    cout << "the maximum sum is " << maxi << endl;
    return rowIndex;
}


int main(){
// int arr[3][3];
int arr[3][3] = {1,2,3,4,5,6,7,8,9};
// int arr[3][3] = {{1,11,111},{2,22,222},{3,33,333}};


// for (int i = 0; i < 3; i++)
// {
//     for (int j = 0; j < 3; j++)
//     {
//         cin>> arr[i][j];
//     }
    
// }

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout<< arr[i][j]<<" ";
    }
    cout<<endl;
    
}



    // cout <<" Enter the element to search " << endl;
    // int target;
    // cin >> target;

    // if(isPresent(arr, target, 3, 3)) {
    //     cout <<" Element found " << endl;
    // }
    // else{
    //     cout <<" Not Found" << endl;
    // }

    // printColSum(arr, 3, 3 );
    
    int ansIndex = largestRowSum(arr,3,3);
    cout << " Max row is at index " << ansIndex << endl;


return 0;
}