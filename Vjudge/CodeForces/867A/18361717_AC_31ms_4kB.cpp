#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count1=0,count2=0;
    string s;
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='S'&&s[i+1]=='F')
            count1++;
        if(s[i]=='F'&&s[i+1]=='S')
            count2++;
    }
    if(count1>count2)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
