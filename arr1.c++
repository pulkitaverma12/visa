// find summation of all the element in array of user input
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<"summation sum: "<<sum<<endl;
    return 0;
}
