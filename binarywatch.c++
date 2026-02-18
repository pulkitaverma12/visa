#include<iostream>
#include<vector>
#include<string>
using namespace std;
class binarywatch{
    public:
    vector<string> readbinarywatch(int turnedon){
        vector<string> result ;
        for(int hh=0;hh<=11;hh++){
            for(int mm=0;mm<=59;mm++){
                if(__builtin_popcount(hh)+ __builtin_popcount(mm)==turnedon){
                    string hour = to_string(hh);
                    string minute = (mm<10?"0":"")+to_string(mm);
                    result.push_back(hour+":"+minute);
                }
            }
        }
    return result;
    }
};
int main(){
    binarywatch b;
    int turnedon = 1;
    vector<string> result = b.readbinarywatch(turnedon);
    for(string time:result){
        cout<<time<<endl;
    }
    return 0;
}