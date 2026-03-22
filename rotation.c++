// [0,1,2,4,5,6,7] migth be left rotated by 3 indices to become [4,5,6,7,0,1,2]
#include<iostream>
using namespace std;
int leftrotate(int arr[],int n,int d){
    int temp[d];
    for(int i = 0;i<n;i++){
        if(i<d){
            temp[i] = arr[i];
        }
        else{
            arr[i-d] = arr[i];
        }
    }
    for(int i = 0;i<d;i++){
        arr[n-d+i] = temp[i];
    }
}
int main(){
    int arr[] = {0,1,2,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d =3;
    leftrotate(arr,n,d);
    cout<<"left rotate: ";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}