#include <iostream>
using namespace std;

void function(int n, int i)
{
    if (n == i)
        return;

    cout << "sammi" << endl;
    i++;

    function(n, i);
}

int main()
{
    int n;
    cin >> n;
    function(n, 0);
}