#include <iostream>
using namespace std;

int search_array(int l, int arr[], int k)
{
    for (int i = 0; i < l; i++)
    {
        if (k == arr[i])
        {
            return i;
        }
    }
    return -1;
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
    cout << "Array elements are:";
    for (int j = 0; j < l; j++)
    {
        cout << arr[j]<<" ";
    }
    cout << endl;
    int key;
    cout << "Enter the key value which you want to search:";
    cin >> key;
    int search = search_array(l, arr, key);
    if (search == -1)
    {
        cout << "The key is not present in the array!";
    }
    else
    {
        cout << "The key " << key << " is present in " << search << " index!";
    }
}