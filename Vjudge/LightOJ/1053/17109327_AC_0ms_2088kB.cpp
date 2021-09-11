#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        double a[3];
        for(int j=0;j<3;j++)
            scanf("%lf",&a[j]);
        sort(a,a+3);
        if(pow(a[2],2)==(pow(a[1],2)+pow(a[0],2)))
            printf("Case %d: yes\n",i);
        else
            printf("Case %d: no\n",i);
    }
    return 0;
}
