#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1="Icosahedron",s2="Cube",s3="Tetrahedron",s4="Dodecahedron",s5="Octahedron";
    int n,count=0;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s==s1)
           count+=20;
        else if(s==s2)
            count+=6;
        else if(s==s3)
            count+=4;
        else if(s==s4)
            count+=12;
        else
            count+=8;
    }
    cout<<count<<endl;
}
