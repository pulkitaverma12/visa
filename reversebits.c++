#include<iostream>
#include<string>
using namespace std;
class solution{
    public:
    int reversebits(int n){
        int result = 0;
        int mask = 1;
        for(int i = 0;i< 32;i++){
            if((mask & n)!= 0){
                result += (1<< (31-i));
            }
            mask <<= 1;
        }
        return result;
    }
};
int main(){
    solution s;
    int n = 43261596;
    int result = s.reversebits(n);
    cout<<result<<endl;
    return 0;
}