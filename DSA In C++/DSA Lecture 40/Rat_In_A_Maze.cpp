#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool isSafe(int x, int y, int n, vector<vector<int>>& maze, vector<vector<int>>& visited) {
        return (x >= 0 && x < n && y >= 0 && y < n && visited[x][y] == 0 && maze[x][y] == 1);
    }

    void solve(int x, int y, int n, vector<vector<int>>& maze, vector<vector<int>>& visited, string path, vector<string>& ans) {
        if (x == n - 1 && y == n - 1) {
            ans.push_back(path);
            return;
        }

        visited[x][y] = 1;

        // Down
        if (isSafe(x + 1, y, n, maze, visited)) {
            solve(x + 1, y, n, maze, visited, path + 'D', ans);
        }

        // Left
        if (isSafe(x, y - 1, n, maze, visited)) {
            solve(x, y - 1, n, maze, visited, path + 'L', ans);
        }

        // Right
        if (isSafe(x, y + 1, n, maze, visited)) {
            solve(x, y + 1, n, maze, visited, path + 'R', ans);
        }

        // Up
        if (isSafe(x - 1, y, n, maze, visited)) {
            solve(x - 1, y, n, maze, visited, path + 'U', ans);
        }

        visited[x][y] = 0; // Backtrack
    }

public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        vector<string> ans;
        int n = maze.size();

        if (maze[0][0] == 0) {
            return ans;
        }

        vector<vector<int>> visited(n, vector<int>(n, 0));
        string path = "";

        solve(0, 0, n, maze, visited, path, ans);
        sort(ans.begin(), ans.end());

        return ans;
    }
};

// Driver Code
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> mat(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> mat[i][j];
            }
        }

        Solution obj;
        vector<string> result = obj.ratInMaze(mat);

        if (result.empty())
            cout << "[]";
        else
            for (const string& path : result)
                cout << path << " ";
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
