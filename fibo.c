#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fibo(int n,int a,int b)
{
    int c=a+b;
    if(n==0)
    exit(0);
    else
    printf("%d ",c);
    a=b;
    b=c;
    n--;
    fibo(n,a,b);
}
int main()
{
    int num=23,x=1,y=1;
    printf("%d %d ",x,y);
    fibo(num,x,y);
}