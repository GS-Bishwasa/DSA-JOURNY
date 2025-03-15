#include <iostream>
#include <algorithm> // For sorting
using namespace std;

bool isPossible(int arr[], int n, int k, int mid) {
    int cowCount = 1;  // First cow at the first position
    int lastPos = arr[0]; // Place first cow at first stall

    for (int i = 1; i < n; i++) {
        if (arr[i] - lastPos >= mid) { // Check if we can place a cow here
            cowCount++;
            lastPos = arr[i]; // Update last placed position
            if (cowCount == k) {
                return true; // Successfully placed all cows
            }
        }
    }
    return false;
}

int Aggcow(int arr[], int n, int k) {
    sort(arr, arr + n); // Step 1: Sort the stall positions
    
    int s = 1; // Minimum possible distance (should be at least 1)
    int maxi = arr[n - 1] - arr[0]; // Maximum possible distance

    int ans = -1;
    
    while (s <= maxi) {
        int mid = s + (maxi - s) / 2;

        if (isPossible(arr, n, k, mid)) {
            ans = mid;  // Store the valid answer
            s = mid + 1; // Try for a larger minimum distance
        } else {
            maxi = mid - 1; // Try for a smaller distance
        }
    }

    return ans;
}

int main() {
    int arr[5] = {4, 2, 1, 3, 6}; // Stall positions
    int k = 2; // Number of cows to place
    cout << "Maximum minimum distance: " << Aggcow(arr, 5, k) << endl;
    return 0;
}
