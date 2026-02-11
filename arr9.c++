// find numbers with even number of digits
#include<iostream>
using namespace std;
bool even(int num){
    int count =0;
    while(num != 0){
        num /= 10;
        count ++;
        cout<<"count: "<<count<<endl;
    }
    return count % 2 == 0;
}
int evendigit(int arr[], int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(even(arr[i])){
            count ++;
        }
    }
    return count ;
}
int main(){
    int arr[] ={12,345,2,6,7896};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = evendigit(arr,n);
    cout<<"the number of even digit numbers in the array is: "<<result<<endl;
    return 0;
}