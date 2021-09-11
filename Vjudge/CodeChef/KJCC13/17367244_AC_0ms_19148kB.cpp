#include<bits/stdc++.h>
using namespace std;
#define Max 1000000
int zero[Max+5];
int counter=0,j;
void solve()
{
    counter++;
    for(int i=0;i<=Max+2;i++)
    {
        j=i;
        while(j>9)
        {
            if(j%10==0)
            {
                counter++;
                break;
            }
            else
                j/=10;
        }
        zero[i]=counter;
    }
}
int main()
{
    solve();
    int test;
    cin>>test;
    while(test--)
    {
        int a,b,z;
        cin>>a>>b;
        if(a<b)
            z=zero[b]-zero[a-1];
        else
            z=zero[a]-zero[b-1];
        cout<<z<<"/"<<abs(b-a)+1<<"\n";
    }
}
