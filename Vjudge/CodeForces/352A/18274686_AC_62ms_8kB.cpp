#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,m;
    cin>>n;
//    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>m;
        if(m)
            count++;
    }
//    sort(a,a+n);
//    reverse(a,a+n);
//    cout<<n<<" "<<((count/9)*9)<<" "<<n-count<<"\n";
    if(count==n)
        cout<<-1<<"\n";
    else if(count<9)
        cout<<0<<"\n";
    else
    {
        for(int i=0;i<((count/9)*9);i++)
            cout<<5;
        for(int i=0;i<n-count;i++)
            cout<<0;
        cout<<"\n";
    }
}
