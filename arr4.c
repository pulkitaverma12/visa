// wap 1,3,2,5,4,6,1
// greater then their left and right neighbour from the 2nd index
#include<stdio.h>
int main(){
    int arr[7] = {1,3,2,5,4,6,1};
    printf("greater: ");
    for(int i=1;i<6;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}