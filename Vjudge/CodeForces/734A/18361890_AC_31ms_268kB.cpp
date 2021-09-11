#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,count=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
            count++;
    }
    if(count>(n-count))
        cout<<"Anton\n";
    else if(count<(n-count))
        cout<<"Danik\n";
    else
        cout<<"Friendship\n";
}
