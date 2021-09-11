#include<bits/stdc++.h>
using namespace std;
void solve()
{
    //freopen("in.txt","r",stdin);
    int a[3];
    while(cin>>a[0]>>a[1]>>a[2]&&a[0]&&a[1]&&a[2])
    {
        set<int>s;
        set<int>::iterator it;
        int cou[20];
        memset(cou,0,sizeof cou);
        for(int i=0;i<3;i++)
        {
            s.insert(a[i]);
            cou[a[i]]++;
        }
        it=s.begin();
        if(s.size()==1)
        {
            int temp=*it;
            if(temp==13)
                cout<<"*"<<endl;
            else
                cout<<temp+1<<" "<<temp+1<<" "<<temp+1<<endl;
        }
        if(s.size()==2)
        {
            int temp1=*it;
            it++;
            int temp2=*it;
            if(temp2==13)
            {
                if(cou[temp2]==2)
                {
                    if(temp1==12)
                        cout<<1<<" "<<1<<" "<<1<<endl;
                    else
                        cout<<temp1 + 1<< " " << 13 << " " << 13 << endl;
                }
                else
                {
                    if(temp1==12)
                        cout<<1<<" "<<13<<" "<<13<<endl;
                    else
                        cout<<1<<" "<<temp1+1<<" "<<temp1+1<<endl;
                }
            }
            else
            {
                if(abs(temp1-temp2)==1)
                {
                    if(cou[temp1]==2)
                        cout<<temp1<<" "<<temp1<<" "<<temp2+1<<endl;
                    else
                        cout<<temp2<<" "<<temp2<<" "<<temp1+2<<endl;
                }
                else
                {
                    if(cou[temp1]==2)
                        cout<<temp1<<" "<<temp1<<" "<<temp2+1<<endl;
                    else
                        cout<<temp1+1<<" "<<temp2<<" "<<temp2<<endl;
                }
            }
        }
        if(s.size()==3)
            cout<<1<<" "<<1<<" "<<2<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}