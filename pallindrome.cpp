#include <iostream>
using namespace std;

bool check(string str, int left, int right)
{
    if (left >= right)
        return true;

    if (str[left] != str[right])
        return false;

    return check(str, left + 1, right - 1);
}

int main()
{
    string str;
    getline(cin >> ws, str);
    int size = str.length();
    // cout << size << " " << str.size();
    bool result = check(str, 0, str.size() - 1);
    if (result)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}