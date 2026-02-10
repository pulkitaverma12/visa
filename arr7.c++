// choclate distribution problem
// 7 bunch of choco h sort krna h fir pehla 3 3 logo ko dena h 
// fir gap find krna h fir 1st vale ko chor do 2,3,4 ko fir denge kisi ko
// index 1 or 3 gap fir sabme se minimum gap find krna h fir usko dena h
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

int main() {
    int arr[7] = {2,3,6,9,1,6,7};
    int n = 7;
    int m = 3; 
    sort(arr, arr + n);
    int minDiff = INT_MAX;
    // find the minimum difference between the maximum and minimum of m consecutive elements  
    for(int i = 0; i <= n - m; i++) {
        int diff = arr[i + m - 1] - arr[i];
        minDiff = min(minDiff, diff);
    }
    cout << "Minimum difference: " << minDiff << endl;
    return 0;
}
