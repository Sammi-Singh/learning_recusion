#include <iostream>
#include <vector>
using namespace std;

void subs(int ind, int arr[], vector<int> &ds, int n)
{
    if (ind >= n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }

        if (ds.size() == 0)
            cout << "{}";

        cout << endl;
        return;
    }

    ds.push_back(arr[ind]);
    subs(ind + 1, arr, ds, n);

    ds.pop_back();
    subs(ind + 1, arr, ds, n);
}

int main()
{
    int n;
    cin >> n;
    int arr[] = {3, 1, 2};
    vector<int> ds;
    subs(0, arr, ds, n);
}
