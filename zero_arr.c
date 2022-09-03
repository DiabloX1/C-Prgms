#include <stdio.h>
int main()
{
    int a[9]={3, 0, 5, 2, 11, 0, 4, 0, 1 },i,j=0,t=0;
    int res[9];
    for(i=0;i<9;i++)
    {
        if(a[i]!=0)
        res[j++]=a[i];
        else
        t++;
    }
    for(i=0;i<t;i++)
    res[j++]=0;
    for(i=0;i<9;i++)
    printf("%d ",res[i]);
}