#include<iostream>
using namespace std;
class solution{
    public:
    int minoperation(string s){
        int n = s.length();
        int start_with_1 = 0;
        int start_with_0 = 0;
        for(int i = 0 ;i<n ;i++){
            if(i % 2 == 0){
                if(s[i] == '0'){
                    start_with_1++;
                }
                else{
                    start_with_0++;
                }
            }
            else{
                if(s[i] == '1'){
                    start_with_1++;
                }
                else{
                    start_with_0++;
                }
            }
        }
        return min(start_with_1,start_with_0);
    }
};
int main(){
    string s;
    cout<<"enter the binary string: ";
    cin >> s;
    solution o;
    cout << o.minoperation(s);
    return 0 ;
}