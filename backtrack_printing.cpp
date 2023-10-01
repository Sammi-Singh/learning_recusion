#include <iostream>
using namespace std;

void fuction(int i, int n)
{
    if (i == n)
        return;

    fuction(i, n - 1);

    cout << n  << " ";
}

int main()
{
    int n;
    cin >> n;
    fuction(0, n);
}