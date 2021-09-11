#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int a[3];
    while(n--)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[1]==1)
            count++;
    }
    cout<<count<<endl;
}
