#include<stdio.h>

int i=11;

extern int j;

int main()
{

    printf("value of i is:%\n",i);
    printf("value of j is :%d\n",j);
    return 0;
}