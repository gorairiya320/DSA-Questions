#include <iostream>
#include <climits>
using namespace std;

void sort(int l, int arr[])
{

    for (int i = 0; i < l - 1; i++)
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
}

float median(int l, int arr[])
{
    sort(l, arr);
    if (l % 2 != 0)
    {
        return arr[l / 2];
    }
    else
    {
        float median;
        int frst = arr[l / 2];
        int scnd = arr[(l / 2) - 1];
        median = (frst + scnd) / 2.0;
        return median;
    }
}

int main()
{
    int l;
    cout << "Enter the length of the array:";
    cin >> l;
    int arr[l];
    cout << "Enter the elements of array:";
    for (int i = 0; i < l; i++)
    {
        cin >> arr[i];
    }

    /*sort(l, arr);
    for (int k = 0; k < l; k++)
    {
        cout << arr[k];
    }*/

    float mid_value = median(l, arr);
    cout << "Median value of the array is:" << mid_value;
}