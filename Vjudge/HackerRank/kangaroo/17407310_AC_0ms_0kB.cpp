#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    if(v2>=v1)
        cout<<"NO\n";
    else if((x2-x1)%(v2-v1)==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";

}
