// 1,6,2,3,5,,4,11,9
// reverse the number expect the odd number using recursion
#include <iostream>
using namespace std;
void reverseEven(int arr[], int left, int right)
{
    if(left >= right)
        return;

    if(arr[left] % 2 != 0)
        reverseEven(arr, left + 1, right);

    else if(arr[right] % 2 != 0)
        reverseEven(arr, left, right - 1);

    else
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        reverseEven(arr, left + 1, right - 1);
    }
}

int main()
{
    int arr[] = {1,6,2,3,5,4,11,9};
    int n = 8;
    reverseEven(arr, 0, n-1);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}