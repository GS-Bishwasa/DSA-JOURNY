#include <iostream>
#include <vector>
using namespace std;

void solve(vector<vector<int>>& ans, vector<int> nums, int index) {
    // Base Case
    if (index >= nums.size()) {
        ans.push_back(nums);
        return;
    }

    for (int j = index; j < nums.size(); j++) {
        swap(nums[index], nums[j]);         // Choose
        solve(ans, nums, index + 1);        // Explore
        swap(nums[index], nums[j]);         // Un-choose (Backtrack)
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    solve(ans, nums, 0);
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3};  // You can take user input instead
    vector<vector<int>> permutations = permute(nums);

    cout << "All permutations:\n";
    for (const auto& p : permutations) {
        cout << "[ ";
        for (int num : p) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
