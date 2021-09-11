#include<bits/stdc++.h>
using namespace std;
#define Pi acos(-1)
double R,n,areaofC;
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        cin>>R>>n;
        double r=(sin(Pi/n)*R)/(1+sin(Pi/n));
        printf("Case %d: %lf\n",i,r);
    }
    return 0;
}
