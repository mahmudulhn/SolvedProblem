#include<bits/stdc++.h>
using namespace std;
void solve()
{
    //freopen("in.txt","r",stdin);
    int tc;
    while(cin>>tc){
        for(int i=1;i<=tc;i++){
            cin.ignore();
            bool f=false;
            int date_1,date_2,month_1,month_2,year_1,year_2;
            scanf("%d/%d/%d",&date_1,&month_1,&year_1);
            scanf("%d/%d/%d",&date_2,&month_2,&year_2);
            int age;
            age=year_1-year_2;
            if(month_1<month_2)
                age--;
            if(month_1==month_2&&date_1<date_2)
                age--;
            if(age<0)
                cout<<"Case #"<<i<<": Invalid birth date"<<endl;
            else if(age>130)
                cout<<"Case #"<<i<<": Check birth date"<<endl;
            else
                 cout<<"Case #"<<i<<": "<<age<<endl;

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
