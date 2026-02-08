// passing the string to the function
#include<stdio.h>
int main(){
    char str[100];
    printf("enter the string: ");
    fgets(str,100,stdin);
    printf("the string is: %s",str);
    return 0;
}