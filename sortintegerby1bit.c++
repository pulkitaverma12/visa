#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

class Solution{
public:
    vector<int> sortByBits(vector<int> &a){
        map<int,vector<int>> m;
        sort(a.begin(),a.end());

        for(int i = 0; i < a.size(); i++){
            int b = __builtin_popcount(a[i]);
            m[b].push_back(a[i]);
        }

        vector<int> ans;
        for(auto &p : m){
            for(auto &x : p.second){
                ans.push_back(x);
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> a = {0,1,2,3,4,5,6,7,8};
    vector<int> result = s.sortByBits(a);

    for(int x : result){
        cout << x << " ";
    }
    return 0;
}