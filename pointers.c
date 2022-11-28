#include <stdio.h>

int main(){
    int a = 76;
    int *ptra =  &a;
    int *ptr2 = NULL;
    printf("The address to pointer a is %p\n", &ptra);
    printf("the adress to a is %p\n", ptra);
    printf("Adress of a is %p\n", &a);
    printf("The value of a is %d\n", *ptra);
    printf("the address of ptr2 is %p\n", &ptr2);
    printf("the value of a is %d\n", a);

    return 0;
}