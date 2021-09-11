#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,z;
    while(cin>>n)
    {
        int sum[3]={0},a[n+1];
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<=n;i+=3)
            sum[0]+=a[i];
        for(int i=2;i<=n;i+=3)
            sum[1]+=a[i];
        for(int i=3;i<=n;i+=3)
            sum[2]+=a[i];
        if(max(sum[0],max(sum[1],sum[2]))==sum[0])
            cout<<"chest"<<endl;
        if(max(sum[0],max(sum[1],sum[2]))==sum[1])
            cout<<"biceps"<<endl;
        if(max(sum[0],max(sum[1],sum[2]))==sum[2])
            cout<<"back"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

