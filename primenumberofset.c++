#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
class solution{
    public:
    int primenumberofset(int left,int right){
        int result = 0;
        unordered_set<int> prime = {2,3,7,11,13,17,19};
        for(int num = left ; num <= right; num++){
            int counts = 0;
            counts = __builtin_popcount(num);
            if(prime.count(counts)){
                result ++;
            }
        }
        return result;
    }
};
int main(){
    int left = 6;
    int right = 10;
    solution s;
    int result = s.primenumberofset(left,right);
    cout<<result<<endl;
    return 0;
}