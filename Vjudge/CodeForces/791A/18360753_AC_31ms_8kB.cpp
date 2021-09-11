#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,count=0;
    cin>>a>>b;
    while(a<=b)
    {
        count++;
        a*=3;
        b*=2;
    }
    cout<<count<<endl;
}
