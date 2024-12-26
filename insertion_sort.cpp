#include<iostream>
using namespace std;

void sotrArray(int l,int arr[]){
    for(int i=1;i<l;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    cout<<"After sorting the array is:";
    for (int k=0;k<l;k++){
        cout<<arr[k]<<" ";
    }
}


int main(){
    int l;
    cout<<"Enter the length of the array:";
    cin>>l;
    int arr[l];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }
    cout<<"The elements are:";
    for(int j=0;j<l;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    sotrArray(l,arr);
}
