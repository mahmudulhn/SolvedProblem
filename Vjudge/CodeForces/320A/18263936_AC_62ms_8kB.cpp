#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int flag=0;
    for(int i=0;i<a.size();)
    {
        if((a[i]=='1'&&a[i+1]=='4'&&a[i+2]=='4'))
        {
            flag=1;
            i+=3;
        }
        else if(a[i]=='1'&&a[i+1]=='4')
        {
            flag=1;
            i+=2;
        }
        else if(a[i]=='1')
        {
            flag=1;
            i++;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
