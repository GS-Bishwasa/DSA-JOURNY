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


// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// string binary ="";
// while (n!=0)
// {
//     int bit = n&1;
//  binary=to_string(bit)+binary;
//  n=n>>1;
// }
// cout<<binary;

// return 0;
// }



// For Negative Integers
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// float ans=0;
// int i =0;
// int r = (~n)+1;
// string binary ="";
// while (r!=0)
// {
//     int bit = r&1;
//  ans=bit*pow(10,i)+ans;
//  r=r>>1;
//  i++;
// }
// cout<<ans;

// return 0;
// }



// For Binary To Decimal
#include <iostream>
#include <math.h>
using namespace std;
int main() {
        int n;
        cin >> n;
    
        int ans = 0;
        int i = 0;
    
        while (n != 0) {
            int digit = n % 10; 
            if(digit==1){

                ans = (ans + pow(2, i)); 
            }
            n = n/10; 
            i++;
        }
        cout << ans;
    
        return 0;
}
