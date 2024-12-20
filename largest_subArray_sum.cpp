#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int largest_subarray_sum(vector<int> ans){
    int max=INT_MIN;
    for (int i=0;i<ans.size();i++){
        if(ans[i]>max){
            max=ans[i];
        }
    }
    return max;
}

int subArray(int l,int arr[]){
    vector<int>ans;
    for(int i=0;i<l;i++){
        int sum=0;
        for(int j=i;j<l;j++){
            sum=sum+arr[j];
        }
        ans.push_back(sum);
    }
    int max=largest_subarray_sum(ans);

    cout<<"The largest subarrsy sum of the array is:"<<max;

}


int main(){
    int l;
    cout<<"Enter the length of the array:";
    cin>>l;
    int arr[l];
    cout<<"Enter the array elements:";
    for (int i=0;i<l;i++){
        cin>>arr[i];
    }
    subArray(l,arr);

}