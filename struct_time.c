#include <stdio.h>
struct time
{
    int h;
    int m;
    int s;
};
int main()
{
    struct time t1,t2,t3;
    int h1,m1,s1,h2,m2,s2;
    printf("Time 1:");
    scanf("%d %d %d",&h1,&m1,&s1);
    printf("Time 2:");
    scanf("%d %d %d",&h2,&m2,&s2);
    t1.h=h1;
    t1.m=m1;
    t1.s=s1;
    t2.h=h2;
    t2.m=m2;
    t2.s=s2;
    
        t3.h=t1.h-t2.h;
        if(t1.m>t2.m)
        {
            t3.m=t1.m-t2.m;
            if(t1.s>t2.s)
            t3.s=t1.s-t2.s;
            else
            {
                t3.s=60-(t2.s-t1.s);
                t3.m-=1;
                if(t3.m<0)
                {
                    t3.m=59;
                    t3.h-=1;
                }
            }
        }
        else
        {
            t3.m=60-(t2.m-t1.m);
            t3.h-=1;
            if(t1.s>t2.s)
            t3.s=t1.s-t2.s;
            else
            {
                t3.s=60-(t2.s-t1.s);
                t3.m-=1;
                if(t3.m<0)
                {
                    t3.m=59;
                    t3.h-=1;
                }
            }
        }
        printf("%d %d %d",t3.h,t3.m,t3.s);
}