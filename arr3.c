// frequency of each element
// 1,1,2,2,2,4,4,5,6,6,,7,7,7,7
#include<stdio.h>
int main(){
    int arr[15] = {1,1,2,2,2,4,4,5,6,6,7,7,7,7};
    // frequency array to store the frequency of each element
    int freq[15] = {0};
    // count the frequency of each element
    for(int i=0;i<15;i++){
        freq[arr[i]]++;
    }
    // print the frequency of each element
    for(int i=0;i<15;i++){
        // print duplicate values
        if(freq[i]>1){
            printf("element: %d, frequency: %d\n",i,freq[i]);
        }
    }
    return 0;
}