// Find the largest element from the  array
#include<iostream>
#include<climits>
using namespace std;

int max_num(int l,int arr[]){
    int max=INT_MIN;
    for(int i=0;i<l;i++){
        cout<<arr[i]<<""<<endl;
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;

}

int main(){
    int l;
    cout<<"Enter the length of the array:";
    cin>>l;
    int arr[l];
    cout<<"Enter the elements of arr:";
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }
    cout<<"Array elements are:";

    int max_value=max_num(l,arr);
    cout<<"The maximum vlue is:"<<max_value;

}