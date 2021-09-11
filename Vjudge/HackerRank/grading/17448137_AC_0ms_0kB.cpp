#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    while(n--)
    {
        cin>>m;
        if(m<38)
            cout<<m<<"\n";
        else
        {
            int x=(m/5)+1;
            if(((x*5)-m)<3)
                cout<<(x*5)<<"\n";
            else
                cout<<m<<"\n";
        }
    }
}
