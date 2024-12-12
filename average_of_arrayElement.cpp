#include<iostream>
using namespace std;


float avg(int l,int arr[]){
    float sum=0;
    for(int i=0;i<l;i++){
        sum=sum+arr[i];
    }
    float average;
    average=sum/l;
    return average;
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
    float average=avg(l,arr);
    cout<<"Average of the array elements are:"<<average;

}