#include <bits/stdc++.h>
using namespace std;

void recur_Permute(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int freq[], int n)
{
    if (ds.size() == n)
    {
        ans.push_back(ds);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (!freq[i])
        {
            ds.push_back(nums[i]);
            freq[i] = 1;
            recur_Permute(ds, nums, ans, freq, n);
            ds.pop_back();
            freq[i] = 0;
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> ds;
    vector<vector<int>> ans;
    int freq[n] = {0};
    recur_Permute(ds, nums, ans, freq, n);
    cout << ans.size() << endl;
    for (auto it : ans)
    {
        for (auto x : it)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}