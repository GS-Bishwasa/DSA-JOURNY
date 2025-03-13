#include <iostream>
using namespace std;

long long int FindSqrt(int n)
{
    int s = 0, e = n;
    long long int ans;
    long long int mid = s + (e - s) / 2;

    while (s <= n)
    {
        long long int square = mid * mid;
        if (square > n)
        {
            e = mid - 1;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (square == n)
        {
            return mid;
        }

        mid = s + (e - s) / 2;
    }

    return 0;
}

int main()
{
    int n = 36;
    cout << FindSqrt(n);
    return 0;
}