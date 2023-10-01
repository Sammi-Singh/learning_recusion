#include <iostream>
#include <vector>

using namespace std;

class solution
{
public:
    void find_combination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
    {
        if (ind == arr.size())
        {
            if (target == 0)
            {
                ans.push_back(ds);
            }
            return;
        }

        if (arr[ind] <= target)
        {
            ds.push_back(arr[ind]);
            find_combination(ind, target - arr[ind], arr, ans, ds);
            ds.pop_back();
        }

        find_combination(ind + 1, target, arr, ans, ds);
    }

public:
    vector<vector<int>> combination_sum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        find_combination(0, target, candidates, ans, ds);
        return ans;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "enter the target" << endl;
    int target;
    cin >> target;

    solution s;
    vector<vector<int>> vec;
    vec = s.combination_sum(arr, target);
    for (auto it : vec)
    {
        for (auto x : it)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}