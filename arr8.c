#include<stdio.h>
int main(){
    int a[]={2,5,4,7,8,1};
    int diff[5],sub;
    for(int i=0;i<5;i++){
        sub = a[i+1] - a[i];
        diff[i] = sub;
    }
    for(int i=0;i<5;i++){
        int temp = diff[i];
        diff[i] = diff[i+1];
        diff[i+1] = temp;
    }
    printf("diff: %d",diff[0]);
    return 0;  
}