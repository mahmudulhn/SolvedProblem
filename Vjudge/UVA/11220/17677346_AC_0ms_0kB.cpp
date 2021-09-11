#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,i;
    cin>>test;
    getchar();
    getchar();
    for(int i=1;i<=test;i++)
    {
        cout<<"Case #"<<i<<":\n";
        string s;
        bool check=false,n=false;
        while(getline(cin,s))
        {
            if(s.empty())
            {
                check=true;
                break;
            }
            vector<int>v;
            int j=0,l=1;
            for(int k=0;k<s.size();k++)
            {
                if(s[k]==' ')
                    v.push_back(k);
            }
            v.push_back(125);
            if(s[0]!=' ')
            {
                cout<<s[0];
                l++;
            }
            for(int k=0;k<v.size()-1;k++)
            {
                if((v[k+1]-v[k])>l&&(v[k]+l)<s.size())
                {
                    cout<<s[v[k]+l];
                    l++;
                }
            }
            cout<<"\n";
        }
        if(i!=test)
            cout<<"\n";
    }
}
