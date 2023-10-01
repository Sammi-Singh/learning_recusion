#include <iostream>
using namespace std;

void function(int n)
{
    if (n == 0)
        return;

    cout << n;

    function(n - 1);
}

int main()
{
    int n;
    cin >> n;
    function(n); 
}