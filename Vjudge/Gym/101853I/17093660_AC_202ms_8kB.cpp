#include<bits/stdc++.h>
using namespace std;
#define Pi acos(-1)
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        double b,c,d;
        scanf("%lf%lf%lf",&b,&c,&d);
        double a=d/(pow(2.0,0.5));
        double area;
        area=((pow(a/2.0,2)*Pi)*2)-((pow(d/2.0,2)*Pi)-pow(a,2));
        printf("%lf\n",area);
    }
    return 0;
}
