#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int n;
    for(int i=1;i<=test;i++)
    {
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(s[j]=='.')
            {
                j+=2;
                count++;
            }
        }
        cout<<"Case "<<i<<": "<<count<<"\n";
    }
}
