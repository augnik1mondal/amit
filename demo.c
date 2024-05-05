#include<stdio.h>
int main()
{

    int a=5;
    int *ptr;
    ptr=&a;
    *ptr=*ptr*5;
    printf("%d",a);
    return 0;
}