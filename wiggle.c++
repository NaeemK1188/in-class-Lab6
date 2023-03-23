#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {6, 7, 1, 3, 9, 4};
    int n = 6;

    sort(arr, arr + n);


    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    for (int i: arr)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}