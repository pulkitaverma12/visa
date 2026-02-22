// stack using array
#include<iostream>
#include<stack>
using namespace std;
class mystack{
    public:
    int top,cap;
    int *arr;
    mystack(int c){
        cap = c;
        top = -1;
        arr = new int[cap]; // dynamic array
    }
};
int main(){
    mystack s(5);
    s.arr[0] = 1;
    s.arr[1] = 2;
    s.arr[2] = 3;
    s.arr[3] = 4;
    s.arr[4] = 5;
    for(int i=0;i<5;i++){
        cout<<s.arr[i]<<" ";
    }
    return 0;
}