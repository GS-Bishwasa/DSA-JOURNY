#include<iostream> 
using namespace std;

// Recursion Means function call itself
// And you also want a base case where you want to stop the function calling cycle

int power(int n) {

    //base case 
    if(n == 0)
        return 1;

    //recursive relation
    return 2 * power(n-1);    
}

int main() {

    int n;
    cin >> n;

    int ans = power(n);

    cout << ans << endl;

    return 0;
}