#include <bits/stdc++.h>
using namespace std;

void permutation(int ind, vector<int> &num, vector<vector<int>> &ans)
{
    if (ind == num.size())
    {
        ans.push_back(num);
        return;
    }

    for (int i = ind; i < num.size(); i++)
    {
        swap(num[i], num[ind]);
        permutation(ind + 1, num, ans);
        swap(num[i], num[ind]);
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    vector<vector<int>> ans;
    permutation(0, num, ans);

    for (auto it : ans)
    {
        for (auto x : it)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}