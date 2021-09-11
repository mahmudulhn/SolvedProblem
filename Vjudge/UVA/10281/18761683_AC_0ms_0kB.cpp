#include<bits/stdc++.h>
using namespace std;
void solve()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string s;
    vector<double>t;
    double v=0,dis=0,t1=0,t2=0;
    while(getline(cin,s))
    {
        if(s.size()==0)
            break;
        double x=0,y=0,z=0;
        x=((s[0]-'0')*10)+(s[1]-'0');
        y=((s[3]-'0')*10)+(s[4]-'0');
        z=((s[6]-'0')*10)+(s[7]-'0');
        t2=(x*60*60)+(y*60)+z;
        t.push_back(t2);
        if(s.size()==8)
        {
            dis+=((abs(t[t.size()-1]-t[t.size()-2])/(double)3600)*v);
            cout<<s.substr(0,8)<<" ";
            cout<<fixed<<setprecision(2);
            cout<<dis;
            cout<<" km"<<endl;
        }
        else
        {
            long long a=1;
            dis+=((abs(t[t.size()-1]-t[t.size()-2])/(double)3600)*v);
            //cout<<dis<<endl;
            v=0;
            for(int i=s.size()-1;i>=9;i--)
            {
                if(s[i]!=' ')
                {
                    v+=(s[i]-'0')*a;
                    a*=10;
                }
            }
            //cout<<v<<endl;
        }
    }
//    cout<<t.size()<<endl;
//    for(int i=0;i<t.size();i++){
//        cout<<t[i]<<endl;
//    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

