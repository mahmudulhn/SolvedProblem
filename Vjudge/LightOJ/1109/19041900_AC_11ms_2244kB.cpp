#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >v;
bool compare(pair<int,int>a,pair<int,int>b)
{
    if(a.second<b.second)
        return a.second<b.second;
    else if(a.second==b.second)
        return a.first>b.first;
    else return false;
}
void prec()
{
    int count;
    v.push_back(make_pair(0,0));
    for(int i=1;i<=1000;i++)
    {
        count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
                count++;
        }
        v.push_back(make_pair(i,count));
    }
    sort(v.begin(),v.end(),compare);
}
void solve()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t;
    while(cin>>t)
    {
        for(int i=1;i<=t;i++)
        {
            int n;
            cin>>n;
            cout<<"Case "<<i<<": "<<v[n].first<<endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    prec();
    solve();
}

