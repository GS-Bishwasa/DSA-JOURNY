#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int sign = (n < 0) ? -1 : 1;
    n = abs(n);
    while (n != 0)
    {
        int digit = n % 10;

        if (ans>INT_MAX/10 || ans<INT_MIN/10)
        {
            cout<<0;
            return 0;
        }

        ans = (ans * 10) + digit;
        n = n / 10;

        
    }
    cout << ans*sign;

    return 0;
}