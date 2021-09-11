#include<bits/stdc++.h>
using namespace std;

struct Date{
    string month;
    int day;
    long long year;
};

void solve()
{
    //freopen("in.txt","r",stdin);
    long long test,count,i,fday,fyear,sday,syear;
    Date f,s;
    char c;
    cin>>test;
    i=test;
    while(test--)
    {
        count=0;
        cin>>f.month>>f.day>>c>>f.year;
        cin>>s.month>>s.day>>c>>s.year;
        if(f.month!="January"&&f.month!="February")
            f.year++;
        if(s.month=="January"||(s.month=="February"&&s.day<29))
            s.year--;
        count+=((s.year/4)-((f.year-1)/4));
        count+=((s.year/400)-((f.year-1)/400));
        count-=((s.year/100)-((f.year-1)/100));
        cout<<"Case #"<<i-test<<": "<<count<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}




