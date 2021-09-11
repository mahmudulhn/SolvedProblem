#include<bits/stdc++.h>
using namespace std;
void solve()
{
    //freopen("in.txt","r",stdin);
    int tc;
    while(cin>>tc){
        for(int i=1;i<=tc;i++){
            double term_1,term_2,finaL,att;
            double a[3];
            cin>>term_1>>term_2>>finaL>>att;
            for(int i=0;i<3;i++)
                cin>>a[i];
            sort(a,a+3);
            double sum=term_1+term_2+finaL+att+(a[1]+a[2])/2;
            if(sum>=90)
                cout<<"Case "<<i<<": A"<<endl;
            else if(sum>=80)
                cout<<"Case "<<i<<": B"<<endl;
            else if(sum>=70)
                cout<<"Case "<<i<<": C"<<endl;
            else if(sum>=60)
                cout<<"Case "<<i<<": D"<<endl;
            else
                cout<<"Case "<<i<<": F"<<endl;

        }
    }
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    solve();
}
