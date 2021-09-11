#include<bits/stdc++.h>
using namespace std;
#define Max 1000005
#define Lim 1000000000000
bool isprime[Max];
vector<long long>prime;
vector<long long>alprime;
vector<long long>::iterator it;
void seive()
{
    //int s=sqrt(Max);
    for(long long i=2;i<=Max;i++)
    {
        if(!(isprime[i]))
        {
            prime.push_back(i);
            for(long long j=i*i;j<=Max;j+=i)
                isprime[j]=true;
        }
    }
}
void findAlmostPrime()
{
    for(it=prime.begin();it<prime.end();it++)
    {
        long long n=*it;
        //cout<<n<<"\n";
        for(long long j=n*n;j<=Lim;j=n*j)
        {
            //cout<<j<<"\n";
            alprime.push_back(j);
        }

    }
    sort(alprime.begin(),alprime.end());
}
int searchLow(long long key)
{
    int i;
    for(i=0;i<alprime.size();i++)
    {
        if(alprime[i]==key)
            return i;
        if(alprime[i]>key)
            return i;
    }
}
int searchHigh(long long key)
{
    int i;
    for(i=alprime.size()-1;i>=0;i--)
    {
        if(alprime[i]==key)
            return i;
        if(alprime[i]<key)
            break;
    }
    return i;
}
int main()
{
    //freopen("out.txt","w",stdout);
    seive();
    findAlmostPrime();
    long long test,n,m;
    cin>>test;
    while(test--)
    {
        cin>>n>>m;
        int count=0,low,high;
//        low=upper_bound(alprime.begin(),alprime.end(),n)-alprime.begin();
//        high=lower_bound(alprime.begin(),alprime.end(),m)-alprime.begin();
        low=searchLow(n);
        high=searchHigh(m);
//        for(int i=low;i<=high;i++)
//            count++;
        cout<<(high-low)+1<<"\n";
//        for(it=alprime.begin();it<alprime.end();it++)
//            cout<<*it<<" ";
    }
}

