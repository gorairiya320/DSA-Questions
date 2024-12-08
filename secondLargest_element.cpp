#include <iostream>
#include <climits>
using namespace std;

int first_largestNum(int l, int arr[])
{
    int max = INT_MIN;
    for (int i = 0; i < l; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int second_largestNum(int l, int arr[])
{
    int scnd_max = INT_MIN;
    int frst_max = first_largestNum(l, arr);
    for (int i = 0; i < l; i++)
    {
        if (scnd_max < arr[i] && arr[i] != frst_max){
            scnd_max=arr[i];
        }
    }
    return scnd_max;
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

    int frst_largeNum = first_largestNum(l, arr);
    cout << "The first largest number in the array is:" << frst_largeNum<<endl;
    
    int scnd_largeNum=second_largestNum(l,arr);
    cout<<"The second largest number in the array is:"<<scnd_largeNum;
}
