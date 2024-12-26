#include<iostream>
#include<climits>
using namespace std;

int findSmallest(int l,int arr[],int s){
     int min=INT_MAX;
     int index;
     for(int i=s;i<l;i++){
        if (arr[i]<min){
            min=arr[i];
            index=i;
        }

     }
     return index;
}


void sortArray(int l,int arr[]){
    for(int i=0;i<l-1;i++){
        int smallIndex=findSmallest(l,arr,i);
        int temp=arr[i];
        arr[i]=arr[smallIndex];
        arr[smallIndex]=temp;

    }
    cout<<"After sorting the array is:";
    for(int j=0;j<l;j++){
        cout<<arr[j];
    }

}

int main(){
    int l;
    cout<<"Enter the element of the array:";
    cin>>l;
    int arr[l];
    cout<<"Enter the element of the array:";
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }
    cout<<"Elements are:";
    for(int j=0;j<l;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    sortArray(l,arr);
}