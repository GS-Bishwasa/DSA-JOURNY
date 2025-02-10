// #include <iostream>
// #include <math.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     float ans = 0;
//     int i = 0;

//     while (n != 0) {
//         int bit = n & 1; // Get the least significant bit
//         ans = (bit * pow(10, i)) + ans; // Add the bit to the result
//         n = n >> 1; // Right shift the number to process the next bit
//         i++;
//     }
//     cout << ans;

//     return 0;
// }



// OR


#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
string binary ="";
while (n!=0)
{
    int bit = n&1;
 binary=to_string(bit)+binary;
 n=n>>1;
}
cout<<binary;

return 0;
}
