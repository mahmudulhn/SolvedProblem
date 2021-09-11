#include<bits/stdc++.h>
using namespace std;
#define Pi acos(-1)
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        double r1,r2,r3;
        scanf("%lf%lf%lf",&r1,&r2,&r3);
        double x=r1+r2;
        double y=r3+r2;
        double z=r1+r3;
        double s=(x+y+z)/2;
        double areOftri=sqrt(s*(s-x)*(s-y)*(s-z));
        double a=acos((pow(x,2)+pow(z,2)-pow(y,2))/(2*x*z));
        double b=acos((pow(x,2)+pow(y,2)-pow(z,2))/(2*x*y));
        double c=acos((pow(y,2)+pow(z,2)-pow(x,2))/(2*y*z));
        double areaofC1=(a*pow(r1,2))/2;
        double areaofC2=(b*pow(r2,2))/2;
        double areaofC3=(c*pow(r3,2))/2;
        double ans=areOftri-(areaofC1+areaofC2+areaofC3);
        printf("Case %d: %lf\n",i,ans);
    }
    return 0;
}
