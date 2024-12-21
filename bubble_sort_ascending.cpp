#include <iostream>
using namespace std;

void sort_array(int l, int arr[])
{
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "After sorting the array is:";
    for (int k = 0; k < l; k++)
    {
        cout << arr[k] << " ";
    }
}

int main()
{
    int l;
    cout << "Enter the length of the array:";
    cin >> l;
    int arr[l];
    cout << "Enter the elements of the array:";
    for (int i = 0; i < l; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements of the array is:";
    for (int j = 0; j < l; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;

    sort_array(l, arr);
}