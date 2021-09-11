#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    stack<char>u;
    stack<char>d;
    cin>>n;
    while(n--)
    {
        char c;
        cin>>c;
        if((d.empty()&&c=='U')||(!u.empty()&&c=='D'))
        {
            if(c=='U')
                u.push(c);
            else
                u.pop();
        }
        else
        {
            if(c=='D')
                d.push(c);
            else
                d.pop();
            if(d.empty())
                count++;
        }
    }
    cout<<count<<"\n";
}
