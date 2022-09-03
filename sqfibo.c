#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=1,b=1,c;
    int fib[n];
    fib[0]=a;
    fib[1]=b;
    int i;
    for(i=2;i<n;i++)
    {
        c=a+b;
        fib[i]=c;
        a=b;
        b=c;
    }   
    int (*p)[n];
    int k;
    p=&fib;
    for(i=0;i<n;i++)
    {
        k=*(*p+i);
        printf("%d ",(k*k));
    }
}