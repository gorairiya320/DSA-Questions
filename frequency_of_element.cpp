#include <iostream>
#include <climits>
using namespace std;

int max_num(int l, int arr[])
{
    int max = INT_MIN;
    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << "" << endl;
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

void find_frequency(int l, int arr[])
{
    int size = max_num(l, arr) + 1;
    int temp[size];
    for (int i = 0; i < size; i++)
    {
        temp[i] = 0;
    }
    for (int j = 0; j < l; j++)
    {
        temp[arr[j]]++;
    }
    cout << "Frequncies of all element" << endl;
    for (int k = 0; k < size; k++)
    {
        if (temp[k] == 0)
        {
            continue;
        }
        else
        {
            cout <<k<<" present in the array= "<<temp[k] << " times"<<endl;
        }
    }
}

int main()
{
    int l;
    cout << "Enter the length of the array:";
    cin >> l;
    int arr[l];
    cout << "Enter the elements of arr:";
    for (int i = 0; i < l; i++)
    {
        cin >> arr[i];
    }
    find_frequency(l, arr);
}