#include <iostream>
using namespace std;

int summation(int i, int sum)
{
    if (i == 0)
        return sum;

    sum += i;

    return summation(i - 1, sum);
}

int main()
{
    int n;
    cin >> n;
    int ans = summation(n, 0);
    cout << ans;
}