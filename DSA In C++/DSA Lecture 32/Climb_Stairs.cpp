#include <iostream>
using namespace std;

int countDistinctWays(int nStairs)
{
    //  Write your code here.
    if (nStairs < 0)
        return 0;

    if (nStairs == 0)
        return 1;

    int ans = countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);

    return ans;
}

int main()
{
    cout << countDistinctWays(5);
    
    return 0;
}