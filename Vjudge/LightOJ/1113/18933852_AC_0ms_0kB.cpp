#include<bits/stdc++.h>
using namespace std;
void solve()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n;
    while(cin>>n)
    {
        for(int k=1;k<=n;k++)
        {
            cout<<"Case "<<k<<":\n";
            vector<string>v;
            string com,url;
            int i=0;
            v.push_back("http://www.lightoj.com/");
            while(1)
            {
                cin>>com;
                if(com=="VISIT")
                {
                    cin>>url;
                    i++;
                    for(int j=i;j<v.size();j++)
                        v[j].erase();
                    v.push_back(url);
                    //cout<<i<<" "<<v.size()-1;
                    i=v.size()-1;
                    cout<<v[i];
                    cout<<endl;
//                    cout<<v[i-1];
//                    cout<<endl;

                }
                if(com=="BACK")
                {
                    if(i>0)
                    {
                        //cout<<i<<endl;
                        i--;
                        if(v[i]=="")
                        {
                            while(i-1>=0&&v[i]=="")
                                i--;
                        }
//                        else
//                            i--;
                        //cout<<i<<endl;
                        cout<<v[i];
                    }
                    else
                        cout<<"Ignored";
                    cout<<endl;

                }
                if(com=="FORWARD")
                {
                    if(i<v.size()-1)
                    {
                        i++;
                        if(v[i]=="")
                        {
                            while(i+1<=v.size()-1&&v[i]=="")
                                i++;
                        }
//                        else
//                            i++;
                        cout<<v[i];
                    }
                    else
                        cout<<"Ignored";
                    cout<<endl;
                }
                if(com=="QUIT")
                    break;
            }
//            cout<<v.size()<<endl;
//            for(int j=0;j<v.size();j++)
//            {
//                if(v[j]!="")
//                    cout<<v[j]<<endl;
//            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
