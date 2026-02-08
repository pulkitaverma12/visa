// string and pointer
#include<stdio.h>
int main(){
    char name[]="harry potter";
    printf("%c ", *name);
    printf("%c ", *(name+1));
    printf("%c ", *(name+7));
    char *nameptr;
    nameptr = name;
    printf("%c ", *nameptr);
    printf("%c ", *(nameptr + 1));
    printf("%c ", *(nameptr + 7));
    return 0;

}