#include <iostream>
using namespace std;

void function(int i, int n)
{
    if (i == n)
        return;

    function(i + 1, n);

    cout << i + 1 << " ";
}

int main()
{
    int n;
    cin >> n;
    function(0, n);
}