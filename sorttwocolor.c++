#include<iostream>
using namespace std;
void sorttwocolor(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i]==0){
            i++;
        }
        else{
            swap(arr[i],arr[j]);
            j--;
        
    }
};
int main(){
    int arr[7]={0,1,0,1,1,0,1};
    int n=7;
    sorttwocolor(arr,n);
    cout<<"sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}