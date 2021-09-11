#include<bits/stdc++.h>
using namespace std;
#define Max 10000000000
vector<long long>f;
void fibonacci()
{
    f.push_back(0);
    f.push_back(1);
    for(int i=2;f[i-1]<=Max;i++)
        f.push_back(f[i-1]+f[i-2]);
}
void solve()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t;
    while(cin>>t)
    {
        for(int j=1;j<=t;j++)
        {
            long long n;
            cin>>n;
            if(binary_search(f.begin(),f.end(),n))
                cout<<"IsFibo"<<endl;
            else
                cout<<"IsNotFibo"<<endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    fibonacci();
//    for(int i=0; i<f.size();i++)
//        cout<<f[i]<<endl;
    solve();
}

