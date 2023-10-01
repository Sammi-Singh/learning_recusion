#include <bits/stdc++.h>
using namespace std;

void subset(int ind, vector<int> vec, vector<int> &sub_sum, vector<int> &ds, int n)
{
    if (ind == n)
    {
        int sum = 0;
        for (auto it : ds)
        {
            sum += it;
        }
        sub_sum.push_back(sum);
        return;
    }

    ds.push_back(vec[ind]);
    subset(ind + 1, vec, sub_sum, ds, n);

    ds.pop_back();
    subset(ind + 1, vec, sub_sum, ds, n);
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    int sum = 0;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        sum += vec[i];
    }
    // cout << sum << endl;
    vector<int> sub_sum;
    vector<int> ds;
    subset(0, vec, sub_sum, ds, n);

    // for (auto it : sub_sum)
    // {
    //     cout << it << endl;
    // }

    long long min = INT64_MAX;

    for (size_t i = 0; i < sub_sum.size(); i++)
    {
        if (abs(sub_sum[i] - abs(sum - sub_sum[i])) < min)
        {
            min = abs(sub_sum[i] - abs(sum - sub_sum[i]));
        }
    }

    cout << min;
}