// Reverse Integer
// #include <iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     int ans = 0;
//     int sign = (n < 0) ? -1 : 1;
//     n = abs(n);
//     while (n != 0)
//     {
//         int digit = n % 10;

//         if (ans>INT_MAX/10 || ans<INT_MIN/10)
//         {
//             cout<<0;
//             return 0;
//         }

//         ans = (ans * 10) + digit;
//         n = n / 10;

//     }
//     cout << ans*sign;

//     return 0;
// }

// Complement Base10 Integer
// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     cin >> n;
//     int m = n;
//     int masks = 0;

//     if (n == 0)
//     {
//         return 1;
//     }

//     while (m != 0)
//     {
//         masks = (masks << 1) | 1;
//         m = m >> 1;
//     }
//     int ans = (~n) & masks;
//     cout << ans;

//     return 0;
// }


// Power Of 2
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// if ((n > 0) && (n & (n - 1)) == 0)
// {
//    cout<<"It is power of 2";
// }else{
//     cout<<"It is not power of 2";
// }

// return 0;
// }



#include<iostream>
#include<math.h>
using namespace std;

bool isPowerOfTwo(int n) {
    for (int i = 0; i <= 30; i++) { 
        int k = pow(2,i); 
        if (k == n)
            return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    if (isPowerOfTwo(n))
        cout << "It is power of 2";
    else
        cout << "It is not power of 2";

    return 0;

return 0;
}