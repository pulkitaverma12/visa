// create 2 2d array of 3x3 each insert integer values and 
// sum the 1st array of 1st element with 2nd array of 1st element and
//  output will store in 3rd array.
#include<iostream>
using namespace std;
int main(){
    int arr[2][3][3];
    int sum[3];
    cout<<"enter the element of the array: "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                cin >> arr[i][j][k];
            }
        }
    }
    for(int i=0;i<3;i++){
        sum[i] = arr[0][0][i] + arr [1][0][i];
    }
    cout<<"sum: "<<endl;
    for(int i =0;i<3;i++){
        cout<<sum[i]<<" ";
    }
    return 0;
}