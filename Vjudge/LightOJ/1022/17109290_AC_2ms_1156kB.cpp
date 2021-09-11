#include<stdio.h>
#include<math.h>
int main()
{
    int case_,i;
    double dif,r,pi=2*acos(0.0);
    scanf("%d",&case_);
    for(i=1;i<=case_;i++)
    {
        scanf("%lf",&r);
        dif=(4*r*r)-(pi*r*r);
        printf("Case %d: %.2lf\n",i,dif);
    }
}

