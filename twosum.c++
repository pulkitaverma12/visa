#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution{
    public:
    vector<int> twosum(vector<int>& arr,int tar){
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            int first = arr[i];
            int sec = tar - first;
            if(m.find(sec)!=m.end()){
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
            }
            m[first]=i;
        }
        return ans;
    }
};
int main(){
    solution s;
    // user input
    int n,tar;
    cout<<"enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the target: ";
    cin>>tar;
    vector<int>ans = s.twosum(arr,tar);
    if(ans.size()==0){
        cout<<"no solution found"<<endl;
    }
    else{
        cout<<"the indices of the two numbers are: "<<ans[0]<<" and "<<ans[1]<<endl;
    }
    return 0;
}
