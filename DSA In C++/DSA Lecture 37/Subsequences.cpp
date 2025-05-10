#include <iostream>
#include <vector>
using namespace std;

// Recursive function to generate subsequences
void solve(vector<string>& ans, string str, string output, int i) {
    // Base case
    if (i >= str.length()) {
        if (output.length() > 0)
            ans.push_back(output);
        return;
    }

    // Exclude current character
    solve(ans, str, output, i + 1);

    // Include current character
    output.push_back(str[i]);
    solve(ans, str, output, i + 1);
}

// Wrapper function
vector<string> subsequences(string str) {
    vector<string> ans;
    string output = "";
    solve(ans, str, output, 0);
    return ans;
}

// Main function
int main() {
    string input = "abc";  // You can change this or take user input
    vector<string> result = subsequences(input);

    cout << "Subsequences of \"" << input << "\":" << endl;
    for (const string& s : result) {
        cout << s << endl;
    }

    return 0;
}
