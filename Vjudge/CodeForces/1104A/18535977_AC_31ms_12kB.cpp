#include<bits/stdc++.h>
using namespace std;
bool isprime[1002];
vector<int>prime;
void seive()
{
    int s=sqrt(1000);
    for(int i=2;i<=s;i++)
    {
        if(!isprime[i])
        {
            for(int j=i*i;j<=1000;j+=i)
                isprime[j]=true;
        }
    }
    for(int i=2;i<=1000;i++)
    {
        if(!isprime[i])
            prime.push_back(i);
    }
}
void solve()
{
    int n,m=0;
    while(cin>>n)
    {
//        m=0;
//        for(int i=0;i<prime.size();i++)
//        {
//            if(n%prime[i]==0&&n!=prime[i])
//            {
//                m=prime[i];
//                break;
//            }
//        }
//        if(m==0&&n==1)
//            cout<<1<<"\n"<<1<<endl;
//        else if(m==0)
//        {
            cout<<n<<endl;
            for(int i=0;i<n;i++)
                cout<<1<<" ";
            cout<<endl;
//        }
//        else
//        {
//            cout<<n/m<<endl;
//            for(int i=0;i<n/m;i++)
//                cout<<m<<" ";
//            cout<<endl;
//        }

    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //seive();
    solve();
}

