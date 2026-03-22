// given an array of integers,find the contiguous  subarray with largest sum 
#include<iostream>
using namespace std;
int maxsubarray(int arr[],int n){
    int max_sum = 0;
    for(int i =0;i<n;i++){
        int sum = 0;
        for(int j = i;j<n;j++){
            sum += arr[j];
            max_sum = max(max_sum,sum);
        }
    }
}
int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"the maximum subarray sum is "<<maxsubarray(arr,n)<<endl;
    return 0;
}