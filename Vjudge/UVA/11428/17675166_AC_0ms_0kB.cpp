#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
//pair<int,int>p;
//map<int,pair<int,int> >mp;
int x[MAX+1],y[MAX+1];
bool ans[MAX+1];
void sol()
{
    for(int i=1;i<=59;i++)
    {
        for(int j=0;j<=i-1;j++)
        {
            long long a=pow(i,3)-pow(j,3);
            if((a<=MAX)&&!ans[a])
            {
                ans[a]=true;
                x[a]=i;
                y[a]=j;
            }
        }
    }
}
int main()
{
    memset(ans,false,sizeof(ans));
    sol();
    int n;
    while(cin>>n&&n!=0)
    {
        if(ans[n])
            cout<<x[n]<<" "<<y[n]<<"\n";
        else
            cout<<"No solution\n";
    }

}
