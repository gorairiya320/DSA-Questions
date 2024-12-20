#include<iostream>
using namespace std;

int largest_subArraySum(int l,int arr[]){
    int maxSum=arr[0];
    int currSum=0;
    for(int i=0;i<l;i++){
        currSum=currSum+arr[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
}

int main(){
    int l;
    cout<<"Enter the length of array:";
    cin>>l;
    int arr[l];
    cout<<"Enter the elements of array:";
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }
    int maxSum=largest_subArraySum(l,arr);
    cout<<"The largest subarray sum is:"<<maxSum;
}