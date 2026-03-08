#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a,int l,int m,int r){
    vector<int> temp;
    int i=l,j=m+1;
    while(i<=m && j<=r){
        if(a[i] <= a[j]) temp.push_back(a[i++]);
        else temp.push_back(a[j++]);
    }
    while(i<=m) temp.push_back(a[i++]);
    while(j<=r) temp.push_back(a[j++]);
    for(int k=0;k<temp.size();k++)
        a[l+k] = temp[k];
}
void mergesort(vector<int>& a,int l,int r){
    if(l<r){
        int m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}

int main(){
    vector<int> a={9,5,2,1,3};
    mergesort(a,0,a.size()-1);
    for(int x:a) cout<<x<<" ";
}