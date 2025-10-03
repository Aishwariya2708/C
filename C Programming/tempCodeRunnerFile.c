#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size=0;
    int *p=NULL;
    int iCnt=0;

    printf("Enter number of elements\n");
    scanf("%d",&size);

    p=(int*)malloc (size* sizeof(int));

    printf("please enter elements");

    for(iCnt=0;iCnt<size;iCnt ++)
    {
        Scnaf("%d",&p[iCnt]);

    }
    printf("entered elements are");

    for(iCnt=0;iCnt<size;iCnt ++)
    {
        printf("%d",p[iCnt]);


}
free(p);
return 0;
}
