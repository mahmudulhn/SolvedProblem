#include<bits/stdc++.h>
using namespace std;
//int a[]={2,4,6,8,10,12,14,16,32,64,128,256};
//map<string,int>mp;
void solve()
{
    int n;
    while(cin>>n)
    {
        int sum1=0,sum2=0,sum3=0,sum4=0;
        while(n--)
        {
            int a,b,c;
            cin>>a>>b>>c;
            if(a==1)
            {
                sum1+=b;
                sum2+=c;
            }
            else
            {
                sum3+=b;
                sum4+=c;
            }
        }
        //cout<<sum1<<" "<<sum2<<" "<<sum3<<" "<<sum4<<endl;
        if(sum1>=sum2)
            cout<<"LIVE"<<endl;
        else
            cout<<"DEAD"<<endl;
        if(sum3>=sum4)
            cout<<"LIVE"<<endl;
        else
            cout<<"DEAD"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}



