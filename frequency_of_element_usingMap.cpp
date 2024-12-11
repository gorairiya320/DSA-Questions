#include<iostream>
#include<unordered_map>
using namespace std;

void find_frequency(int l,int arr[]){
    unordered_map<int,int>mp;
    for(int i=0;i<l;i++){
        mp[arr[i]]++;
    }
    for(auto i:mp){
        cout<<i.first<<"present in the array"<<i.second<<"times";
    }

}


int main(){
    int l;
    cout<<"Enter the length of the element:";
    cin>>l;
    int arr[l];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }

    find_frequency(l,arr);
}