#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],res[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int max=a[0];
    for(i=1;i<n;i++)
    if(a[i]>max)
    max=a[i];
    int l=0;
    while(max>0)
    {
        l++;
        max/=10;
    }
    int j,k,m;
    for(i=0;i<l;i++)
    {
        int ct=0;
        for(j=0;j<10;j++)
        {
            for(k=0;k<n;k++)
            {
                int e=a[k],r=0,x=e,count=0;
                while(x>0&&count<=i)
                {
                    r=x%10;
                    x/=10;
                    count++;
                }
                if(r==j)
                res[ct++]=e;
            }
        }
    }
for(i=0;i<n;i++)
printf("%d ",res[i]);

}