#include <iostream>
using namespace std;

void SayDigit(int n)
{

    string arr[10] = {"zero", "one", "two", "three",
                      "four", "five", "six", "seven", "eight", "nine"};

    if (n == 0)
        return;

    int digit = n % 10;
    n = n / 10;

    SayDigit(n);
    
    cout << arr[digit] << " ";
}

int main()
{
    int n = 413;
    SayDigit(n);
    return 0;
}