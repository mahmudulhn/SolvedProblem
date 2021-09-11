#include<bits/stdc++.h>
using namespace std;
//int a[]={2,4,6,8,10,12,14,16,32,64,128,256};
//map<string,int>mp;
void solve()
{
    int n,m;
    while(cin>>n>>m)
    {
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        int sum1=0,sum2=0,temp=0;
        for(int i=0;i<n;i++)
        {
            temp+=b[i];
            sum1+=max(0,a[i]-(m*temp));
        }
        temp=0;
        for(int i=n-1;i>=0;i--)
        {
            temp+=b[i];
            sum2+=max(0,a[i]-(m*temp));
        }
        //cout<<sum1<<" "<<sum2<<endl;
        if(sum1==sum2)
            cout<<"Tie"<<endl;
        else if(sum1>sum2)
            cout<<"Limak"<<endl;
        else
            cout<<"Radewoosh"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}


