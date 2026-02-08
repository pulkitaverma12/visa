// rainwater trapping with array
// 3,0,1,0,4,0,2 o/p=10
#include<stdio.h>
int main(){
    int arr[7]={3,0,1,0,4,0,2};
    int left[7];
    int right[7];
    left[0]=arr[0];
    for(int i=1;i<7;i++){
        left[i] = (arr[i]>left[i-1])?arr[i]:left[i-1];
    }
    right[6]=arr[6];
    for(int i=5;i>=0;i--){
        right[i] = (arr[i]>right[i+1])?arr[i]:right[i+1];
    }
    int sum=0;
    for(int i=0;i<7;i++){
        sum += (left[i]<right[i])?left[i]:right[i];
        sum -= arr[i];
    }
    printf("trapped water: %d",sum);
    return 0;
}