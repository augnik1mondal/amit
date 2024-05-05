#include<stdio.h>
int main()
{

    int a=6;
    int *ptr;
    ptr=&a;
    *ptr=*ptr*5;
    printf("%d",a);
    return 0;
}
