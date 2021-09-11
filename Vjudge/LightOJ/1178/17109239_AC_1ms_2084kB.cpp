#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        double s;
        s=(d+b+(abs(a-c)))/2;
        double areoftri;
        areoftri=sqrt(s*(s-b)*(s-d)*(s-(abs(a-c))));
        double h;
        h=(2*areoftri)/(abs(a-c));
        double areoftra;
        if(a<c)
            areoftra=h*a;
        else
            areoftra=h*c;
        areoftra+=areoftri;
        printf("Case %d: %.6lf\n",i,areoftra);
    }
    return 0;
}
