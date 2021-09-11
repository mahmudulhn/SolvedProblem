#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,flag=0;
    cin>>n>>m;
    if(n==1&&m==10)
        cout<<-1<<"\n";
    else
    {
        for(int i=0;i<n;i++)
        {
            if(m%10==0)
            {
                if(!flag)
                {
                    flag=1;
                    cout<<1;
                }
                else
                    cout<<0;
            }
            else
                cout<<m;
        }
        cout<<"\n";
    }
}
