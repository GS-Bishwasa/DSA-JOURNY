#include <iostream>
using namespace std;

void TriSum(int arr[], int n, int s) {
    for (int i = 0; i < n - 2; i++) {  // Fix the first element
        int left = i + 1, right = n - 1;

        while (left < right) {  // Use two pointers
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == s) {  // Found a triplet
                cout << arr[i] << " " << arr[left] << " " << arr[right] << endl;
                left++;
                right--;
            } 
            else if (sum < s) { 
                left++;  // Increase sum
            } 
            else { 
                right--; // Decrease sum
            }
        }
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; 
    int sum = 9;
    TriSum(arr, 5, sum);
    return 0;
}
