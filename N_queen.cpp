#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    bool issafe(int row, int col, vector<string> board, int n)
    {
        int duprow = row;
        int dupcol = col;

        while (row >= 0 && col >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            row--;
            col--;
        }

        col = dupcol;
        row = duprow;

        while (col >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            col--;
        }

        col = dupcol;
        row = duprow;

        while (row < n && col >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            row++;
            col--;
        }

        return true;
    }

public:
    void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n)
    {
        if (col == n)
        {
            ans.push_back(board);
            return;
        }

        for (int row = 0; row < n; row++)
        {
            if (issafe(row, col, board, n))
            {
                board[row][col] = 'Q';
                solve(col + 1, board, ans, n);
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solve_N_queen(int n)
    {
        vector<vector<string>> ans(n);
        vector<string> board(n);
        string s(n, '.');
        for (int i = 0; i < n; i++)
        {
            board[i] = s;
        }
        solve(0, board, ans, n);

        return ans;
    }
};

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    solution queen;
    vector<vector<string>> sol = queen.solve_N_queen(n);
    for (auto it : sol)
    {
        for (auto x : it)
        {
            cout << x << "  " << endl;
        }
        cout << endl;
    }

    return 0;
}