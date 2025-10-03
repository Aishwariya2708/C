#include<stdio.h>


int strlenx(char *Brr[])
{
    int iCnt=0;
    while(*Brr !='\0')
    {
        iCnt++;
        Brr++;

    }
    return iCnt;
}
int main()
{

    char Arr[]="MArvellous Infosystem";
    int ret=0;
    ret=strlenx(Arr);
    printf("Length of string is:%d",ret);
    return 0;

}