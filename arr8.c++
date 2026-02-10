// strobogrammatic number
#include<iostream>
using namespace std;
class strobogrammatic{
    public:
    bool isstrobogrammatic(string num){
        int left =0;
        int right = num.length()-1;
        while(left <= right){
            if(num[left]=='0' && num[right]=='0' || num[left]=='1' && num[right]=='1' 
                || num[left]=='6' && num[right]=='9' || num[left]=='9' && num[right]=='6'
                || num[left]=='8' && num[right]=='8'){
                left ++;
                right --;
        }
        else{
            return false;
        }
    }
    return true;
    }
};
int main(){
    strobogrammatic s;
    string num;
    cout<<"enter the number: ";
    cin >> num;
    if(s.isstrobogrammatic(num)){
        cout<<"the number is strobogrammatic"<<endl;
    }
    else{
        cout<<"the number is not strobogrammatic"<<endl;
    }
    return 0;
}