#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& nums, vector<int>& output, int index, vector<vector<int>>& ans) {
    // Base case
    if (index >= nums.size()) {
        ans.push_back(output);
        return;
    }

    // Exclude current element
    solve(nums, output, index + 1, ans);

    // Include current element
    output.push_back(nums[index]);
    solve(nums, output, index + 1, ans);

    // Backtrack to remove the last element added
    output.pop_back();
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> output;
    solve(nums, output, 0, ans);
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3};  // You can modify this or take input from user
    vector<vector<int>> result = subsets(nums);

    cout << "Subsets:\n";
    for (const auto& subset : result) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
