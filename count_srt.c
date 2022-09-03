#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int max=a[0];
    for(i=1;i<n;i++)
    if(a[i]>max)
    max=a[i];
    int b[max+1];
    for(i=0;i<=max;i++)
    b[i]=0;
    for(i=0;i<n;i++)
    {
        int e=a[i];
        for(j=0;j<=max;j++)
        if(j==e)
        b[j]++;
    }
    for(i=0;i<=max;i++)
    {
        while(b[i]!=0)
        {
            printf("%d ",i);
            b[i]--;
        }
    }
}