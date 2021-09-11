#include<bits/stdc++.h>
using namespace std;
double ab,bc,ac,AreaOfABC,R;

double findAD(double low,double high)
{
    double mid=(low+high)/2;
    double temp=mid/ab;
    double ae=temp*ac;
    double de=temp*bc;
    double s=(mid+ae+de)/2;
    double areofADE=sqrt(s*(s-mid)*(s-ae)*(s-de));
    double r=areofADE/(AreaOfABC-areofADE);
    if(fabs(R-r)<0.00000001)
        return mid;
    else if(r>R)
        return findAD(low,mid);
    else if(r<R)
        return findAD(mid,high);
}

int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        cin>>ab>>ac>>bc>>R;
        double s=(ab+ac+bc)/2;
        AreaOfABC=sqrt(s*(s-ab)*(s-ac)*(s-bc));
        double ad=findAD(0,ab);
        printf("Case %d: %lf\n",i,ad);
    }
    return 0;
}
