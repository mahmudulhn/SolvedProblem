#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,a[6]={0,0,0,0,0,0};
    cin>>n;
    string s,s1[6]={"red","purple","yellow","orange","green","blue"},s2[6]={"Reality","Power","Mind","Soul","Time","Space"};
    while(n--)
    {
        cin>>s;
        if(s==s1[0])
        {
            a[0]=1;
            c++;
        }
        if(s==s1[1])
        {
            a[1]=1;
            c++;
        }
        if(s==s1[2])
        {
            a[2]=1;
            c++;
        }
        if(s==s1[3])
        {
            a[3]=1;
            c++;
        }
        if(s==s1[4])
        {
            a[4]=1;
            c++;
        }
        if(s==s1[5])
        {
            a[5]=1;
            c++;
        }
    }
    cout<<6-c<<endl;
    for(int i=0;i<6;i++)
    {
        if(a[i]==0)
            cout<<s2[i]<<endl;
    }
}
