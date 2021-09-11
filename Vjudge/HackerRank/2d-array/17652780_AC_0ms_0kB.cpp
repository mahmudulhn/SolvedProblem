#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6][6],x=0,y=1,z=2,o=1,sum=0,max=-1000000;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
            cin>>a[i][j];
    }
    int j=0;
    while(j<=3)
    {
        while(z<=5)
        {
            sum=a[j][x]+a[j][y]+a[j][z]+a[j+1][o]+a[j+2][x]+a[j+2][y]+a[j+2][z];
            x++;
            y++;
            z++;
            o++;
            if(sum>max)
                max=sum;
        }
        x=0;
        y=1;
        z=2;
        o=1;
        j++;
    }
    cout<<max<<"\n";
}
