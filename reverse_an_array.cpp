#include <iostream>
using namespace std;

void reverse(int arr[], int left, int right)
{
    if (left >= right)
        return;

    swap(arr[left], arr[right]);

    reverse(arr, left + 1, right - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, 0, size - 1);
    for (auto it : arr)
    {
        cout << it << " ";
    }
}