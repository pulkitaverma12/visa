#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void backtrack(int arr[], int n, int tar, vector<int> &temp, vector<vector<int>> &res, int start){
    if(tar == 0){
        res.push_back(temp);
        return;
    }
    for(int i = start; i < n; i++){
        if(arr[i] > tar) break;

        temp.push_back(arr[i]);
        backtrack(arr, n, tar - arr[i], temp, res, i); 
        temp.pop_back();
    }
}
vector<vector<int>> combinationsum(int arr[], int n, int tar){
    vector<int> temp;
    vector<vector<int>> res;
    sort(arr, arr + n); 
    backtrack(arr, n, tar, temp, res, 0);
    return res;
}

int main(){
    int arr[] = {2,3,3,4,6,7};
    int n = 6;
    int tar = 7;
    vector<vector<int>> res = combinationsum(arr, n, tar);
    cout << "Unique combinations:\n";
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}