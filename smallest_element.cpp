// Finding the smallest element

#include <iostream>
#include <climits>
using namespace std;

int smallest_num(int l, int arr[])
{
    int min = INT_MAX;
    for (int i = 0; i < l; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int l;
    cout << "Enter the length of the Array:";
    cin >> l;
    int arr[l];
    cout << "Enter the elements of the array:";
    for (int i = 0; i < l; i++)
    {
        cin >> arr[i];
    }

    int min_num = smallest_num(l, arr);
    cout << "The minimum number is:" << min_num;
}