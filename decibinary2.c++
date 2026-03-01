#include<iostream>
#include<algorithm>
using namespace std;
class solution{
    public:
    int decibinary(string s){
        return *max_element(begin(s),end(s))-'0';
    }
};
int main(){
    solution s;
    string a = "10101";
    int result = s.decibinary(a);
    cout << result << endl;
    return 0;
}