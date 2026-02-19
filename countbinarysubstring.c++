#include<iostream>
#include<string>
using namespace std;
class solution{
    public:
    int countbinarysubstring(string s){
        int result =0;
        int currcount =0;
        int prevcount = 0;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                currcount++;
            }
            else{
                result += min(currcount,prevcount);
                prevcount = currcount;
                currcount = 1;
            }
        }
        return result + min(prevcount,currcount);
    }
};
int main(){
    solution s;
    string str = "000110011";
    int result = s.countbinarysubstring(str);
    cout<<result<<endl;
    return 0;
}