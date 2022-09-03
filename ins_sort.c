#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int j,t;
    for(i=1;i<n;i++)
    {
        t=a[i];
        j=i-1;
        while(t<a[j]&&j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}