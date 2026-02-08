// // 10,20,5,90,27,70,2
// // put it on the array
// // print the largest and smallest index
// // index of both largest and smallest
#include <stdio.h>
int main() {
    int arr[7] = {10, 20, 5, 90, 27, 70, 2};
    int maxIndex = 0;
    int minIndex = 0;
    for (int i = 1; i < 7; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    printf("Largest value: %d\n", arr[maxIndex]);
    printf("Largest index: %d\n", maxIndex);

    printf("Smallest value: %d\n", arr[minIndex]);
    printf("Smallest index: %d\n", minIndex);
    return 0;
}
