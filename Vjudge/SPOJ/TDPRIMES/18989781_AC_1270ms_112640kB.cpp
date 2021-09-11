#include<bits/stdc++.h>
using namespace std;
#define M 100000000
bool isprime[M+2];
vector<int>v;
void seive()
{
    int s=sqrt(M);
    for(int i=3;i<=s;i+=2)
    {
        if(!isprime[i])
        {
            for(int j=i*i;j<=M;j+=i)
                isprime[j]=true;
        }
    }
    v.push_back(2);
    for(int i=3;i<=M;i+=2)
    {
        if(!isprime[i])
            v.push_back(i);
    }
}
long long gcd(long long a,long long b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
long long lcm(long long a,long long b)
{
    return (a*b)/gcd(a,b);
}
void solve()
{
    //freopen("out.txt","w",stdout);
    for(int i=0;i<v.size();i++)
    {
        if(i%100==0)
            cout<<v[i]<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    seive();
    solve();
}
