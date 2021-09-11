#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int test;
    cin>>test;
    getchar();
    for(int q=1;q<=test;q++)
    {
        vector<string>v;
        string s,s1;
        stringstream sin;
        sin.clear();
        getline(cin,s);
        sin<<s;
        while(sin>>s1)
            v.push_back(s1);
        //cout<<s<<endl;
//        int j=0;
//        for(int i=0;i<s.size();i++)
//        {
//            if(s[i]==' ')
//            {
//                v.push_back(s1);
//                s1.clear();
//                j=0;
//            }
//            else
//                s1[j++]=s[i];
//        }
//        for(int j=0;j<v.size();j++)
//            cout<<v[j]<<"\n";
        int y=0,x,i=0,p=3,j;
        while(p--)
        {
            if(v[i][0]>'1'&&v[i][0]<='9')
                x=v[i][0]-'0';
            else
                x=10;
//            for(j=0;j<=10-x;j++)
//                v[j].erase();
            //cout<<x<<" "<<y<<" "<<i<<"\n";
            i=i+(10-x)+1;
            y+=x;
            //cout<<x<<" "<<y<<" "<<i<<"\n";
        }
        cout<<"Case "<<q<<": "<<v[y+i-1]<<"\n";
        //cout<<<<"\n";
    }
}
