#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

int get_mode(int l, int arr[])
{
    unordered_map<int, int> mp;
    int max = INT_MIN;
    for (int i = 0; i < l; i++)
    {
        mp[arr[i]]++;
    }
    int mode=-1;
    for (auto i : mp)
    {
        if (i.second > max)
        {
            max = i.second;
            mode=i.first;
        }
    }
    return mode;
}

int main()
{
    int l;
    cout << "Enter the length of the element:";
    cin >> l;
    int arr[l];
    cout << "Enter the elements of the array:";
    for (int i = 0; i < l; i++)
    {
        cin >> arr[i];
    }

    int mode = get_mode(l, arr);
    cout << "Mode value of the array is:" << mode;
}