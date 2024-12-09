#include<iostream>
using namespace std;

// Function Definition
void reverse_arr(int l,int arr[]){
    int i=0;
    int j=l-1;
    int temp;
    while(i!=j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;

    }

}
int main(){
    int l;
    cout<<"Enter the length of the array:";
    cin>>l;
    int arr[l];

    cout<<"Enter the elements of array:";
    for (int i=0;i<l;i++){
        cin>>arr[i];
    }

    // Function Call
    reverse_arr(l,arr);

    cout<<"The reverse array is:";
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
}