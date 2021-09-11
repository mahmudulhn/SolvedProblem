#include<bits/stdc++.h>
using namespace std;
#define Pi acos(-1)
typedef struct point{
    double x,y;
};
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        struct point o,a,b;
        scanf("%lf%lf%lf%lf%lf%lf",&o.x,&o.y,&a.x,&a.y,&b.x,&b.y);
        double oa=sqrt(pow(o.x-a.x,2)+pow(o.y-a.y,2));
        double ob=sqrt(pow(o.x-b.x,2)+pow(o.y-b.y,2));
        double ab=sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
        double O=(pow(oa,2.0)+pow(ob,2)-pow(ab,2))/(2*oa*ob);
        O=acos(O);
        double arcdis=O*oa;
        printf("Case %d: %lf\n",i,arcdis);
    }
    return 0;
}
