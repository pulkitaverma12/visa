// Access members using Pointer
#include<stdio.h>
struct person{
    int age;
    float weight;
};
int main(){
    struct person *personptr, p1;
    personptr = &p1;
    printf("enter the age: ");
    scanf("%d",&personptr->age);
    printf("enter the weigth: ");
    scanf("%f",&personptr->weight);
    printf("age: %d\n",personptr->age);
    printf("weigth: %.2f\n",personptr->weight);
    return 0;
}