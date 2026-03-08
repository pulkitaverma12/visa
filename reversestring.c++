#include<iostream>
#include<vector>
using namespace std;

void merge(vector<char> &a,int l,int m,int r){
    vector<char> temp;
    int i=l, j=m+1;

    while(i<=m && j<=r){
        if(a[i] >= a[j]) temp.push_back(a[i++]); // descending order
        else temp.push_back(a[j++]);
    }

    while(i<=m) temp.push_back(a[i++]);
    while(j<=r) temp.push_back(a[j++]);

    for(int k=0;k<temp.size();k++){
        a[l+k] = temp[k];
    }
}

void mergesort(vector<char> &a,int l,int r){
    if(l<r){
        int m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}

int main(){
    string s = "hello";
    vector<char> a(s.begin(), s.end());  // convert string to vector
    mergesort(a,0,a.size()-1);
    for(char c:a) cout<<c;
}