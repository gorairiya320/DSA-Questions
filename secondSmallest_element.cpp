#include<iostream>
#include<climits>
using namespace std;

int frst_smallestNum(int l,int arr[]){
    int min=INT_MAX;
    for(int i=0;i<l;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}

int scnd_smallestNum(int l,int arr[]){
    int scnd_min=INT_MAX;
    int frst_min=frst_smallestNum(l,arr);
    for(int i=0;i<l;i++){
        if(scnd_min>arr[i] && arr[i]!=frst_min){
            scnd_min=arr[i];

        }

    }
    return scnd_min;
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
    int first_smallestNum=frst_smallestNum(l,arr);
    cout<<"The first smallest number in the array is:"<<first_smallestNum<<endl;
    int second_smallestNum=scnd_smallestNum(l,arr);
    cout<<"The second smallest number in the array is:"<<second_smallestNum;
}