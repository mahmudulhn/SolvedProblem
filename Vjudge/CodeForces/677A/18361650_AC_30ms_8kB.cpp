#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,count=0;
    cin>>n>>k;
    while(n--)
    {
        int m;
        cin>>m;
        if(m>k)
            count+=2;
        else
            count++;
    }
    cout<<count<<endl;
}
