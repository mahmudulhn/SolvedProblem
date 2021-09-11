#include<bits/stdc++.h>
using namespace std;
typedef struct time{
    int h,m;
};
bool mark[3605];
void solve()
{
    //freopen("in.txt","r",stdin);
    int tc;
    while(cin>>tc){
        for(int i=1;i<=tc;i++)
        {
         struct time s1,e1,s2,e2;
         scanf("%d:%d",&s1.h,&s1.m);
         scanf("%d:%d",&e1.h,&e1.m);
         scanf("%d:%d",&s2.h,&s2.m);
         scanf("%d:%d",&e2.h,&e2.m);
         int st1,et1,st2,et2;
         st1=s1.h*60+s1.m;
         et1=e1.h*60+e1.m;
         st2=s2.h*60+s2.m;
         et2=e2.h*60+e2.m;
         bool f=0;
         //cout<<st1<<" "<<et1<<" "<<st2<<" "<<et2<<endl;
         for(int j=st1;j<=et1;j++)
            mark[j]=1;
         for(int j=st2;j<=et2;j++)
         {
            if(mark[j])
            {
               cout<<"Case "<<i<<": Mrs Meeting"<<endl;
               f=1;
               break;
            }
         }
         if(!f)
            cout<<"Case "<<i<<": Hits Meeting"<<endl;
        memset(mark,0,sizeof mark);
        }
    }
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    solve();
}
