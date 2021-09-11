#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    long long n,c=0,ans;
    cin>>n;
    long long len=a.size();
    for(long long i=0;i<len;i++)
    {
        if(a[i]=='a')
            c++;
    }
    ans=c*(n/len);
    for(long long i=0;i<n%len;i++)
    {
        if(a[i]=='a')
            ans++;
    }
    cout<<ans<<"\n";
}
