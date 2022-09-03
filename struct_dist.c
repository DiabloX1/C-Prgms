#include <stdio.h>
#include <math.h>
struct coord
{
    int x;
    int y;
};
int main()
{
    int a1,b1;
    int a2,b2;
    printf("1st pt:");
    scanf("%d %d",&a1,&b1);
    fflush(stdin);
    printf("2nd pt:");
    scanf("%d %d",&a2,&b2);
    fflush(stdin);
    struct coord p1,p2;
    double d;
    p1.x=a1;
    p1.y=b1;
    p2.x=a2;
    p2.y=b2;
    d=pow(p2.x-p1.x,2.0)+pow(p2.y-p1.y,2.0);
    printf("Distance=%.2lf",pow(d,0.5));
}