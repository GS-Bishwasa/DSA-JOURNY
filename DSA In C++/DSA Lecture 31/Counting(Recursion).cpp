#include <iostream>
using namespace std;

// Recursion Means function call itself
// And you also want a base case where you want to stop the function calling cycle

void print(int n)
{
    // base case
    if (n == 0)
        return;

    cout << n << " ";
    print(n - 1);
}

int main()
{
    int n;
    cin >> n;

    print(n); // Just call it without storing the result
    return 0;
}