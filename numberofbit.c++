#include<iostream>
#include<vector>
#include<string>
using namespace std;
class solution{
    public:
    void addone(string &s){
        int i = s.length() - 1;
        while(i >= 0 && s[i] != '0'){
            s[i] = '0';
            i--;
        }
        if( i < 0){
            s = "1" + s;
        } else {
            s[i] = '1';
        }
    }
    int numsteps(string s){
        int step = 0;
        while(s.length() > 1){
            if(s[s.length() - 1] == '0'){
                s.pop_back();
            }
            else{
                addone(s);
            }
            step++;
        }
        return step;
    }
};
int main(){
    solution s;
    string a = "1101";
    int result = s.numsteps(a);
    cout << result << endl;
    return 0;
}