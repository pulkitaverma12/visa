#include<iostream>
#include<string>
using namespace std;
class solution{
    public:
    int decibinary(string s){
        int count = 0;
        while(true){
            bool changed = false;
            for(char &c : s){
                if(c!='0'){
                    c--;
                    changed = true;
                }
            }
            if(!changed) break;
            count++;
        }
        return count;
    }
};
int main(){
    solution s;
    string a = "101";
    int result = s.decibinary(a);
    cout << result << endl;
    return 0;
}