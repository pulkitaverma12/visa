// 10,20,5,90,27,70,2
// put it on the array
// print the largest and smallest index
#include<stdio.h>
int main(){
    int arr[7]={10,20,5,90,27,70,2};
    // largest and smallest index initialize with the first element of the array
    int largest = arr[0];
    int smallest = arr[0];
    for(int i=1;i<7;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    printf("largest: %d\n",largest);
    printf("smallest: %d\n",smallest);
    return 0;
}