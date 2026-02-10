// array rotation in left side
#include<iostream>
using namespace std;
int main(){
    int n,s;
    cout<<"enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the roation: ";
    cin>>s;
    // agar s is greater than n then we can do s = s%n
    s = s%n;
    int temp[s];
    // copy the first s elements to temp array
    for(int i=0;i<s;i++){
        temp[i]=arr[i];
    }
    // shift the remaining elements to left
    for(int i=s;i<n;i++){
        arr[i-s]=arr[i];
    }
    // copy the temp array to the end of the original array
    for(int i=0;i<s;i++){
        arr[n-s+i]=temp[i];
    }
    cout<<"rotated array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}