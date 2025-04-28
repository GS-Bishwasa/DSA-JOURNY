#include<iostream>
using namespace std;

// Inline Functions are used to reduce the function calls overload

// inline function condition
// if the we are making a function which body is only one line then compiler doesn't complain anything
// if the we are making a function which body is 2-3 line then compiler say "ki marzi hai usko banana hai ya nahi"
// if the we are making a function which body is >3 line then compiler say "nikal yanha se"

inline int getMax(int& a, int& b) {
    return (a>b) ? a : b;
}

int main() {

    int a = 1, b = 2;
    int ans = 0; 

    ans = getMax(a,b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);
    cout << ans << endl;



    return 0;
}