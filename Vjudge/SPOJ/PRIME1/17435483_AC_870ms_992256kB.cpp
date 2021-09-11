#include<bits/stdc++.h>
using namespace std;
#define Max 1000000000
bool isprime[Max+5];
set<int>se;
set<int>::iterator it;
int main()
{
    //seive();
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int s=sqrt(m);
        bool flag;
        for(int i=n;i<=m;i++)
        {
            flag=false;
            if(i<2)
                flag=true;
            for(int j=2;j<=s;j++)
            {
                if(i%j==0&&i!=j)
                {
                    flag=true;
                    break;
                }
            }
            if(!flag)
                    se.insert(i);
        }
        for(it=se.begin();it!=se.end();it++)
            cout<<*it<<"\n";
        cout<<"\n";
        se.clear();
    }

}
