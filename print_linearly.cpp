#include <iostream>
using namespace std;

void function(int n, int i)
{
    if (i > n)
        return;

    cout << i << " ";

    i++;

    function(n, i);
}

int main()
{
    int n;
    cin >> n;
    function(n, 1);
}