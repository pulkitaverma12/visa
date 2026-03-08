// implement selection sort with maximum logic and apply stability 
// using remaining the positions
#include<iostream>
#include<vector>
using namespace std;
void selectionsort(vector<int> &a){
    for(int i =0 ;i<a.size();i++){
        int max = i;
        for(int j = i+1; j<a.size();j++){
            if(a[j]>a[max])
                max = j;
        }
        swap(a[i], a[max]);
    }
}
int main(){
    vector<int> a ={9,5,1,3,2};
    selectionsort(a);
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
}