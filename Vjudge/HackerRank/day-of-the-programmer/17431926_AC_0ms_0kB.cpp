#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1918)
        cout<<"26.09.1918\n";
    else if(n<1918)
    {
        if(n%4==0)
            cout<<"12.09."<<n<<"\n";
        else
            cout<<"13.09."<<n<<"\n";
    }
    else if(n>1918)
    {
        if((n%4==0&&n%100!=0)||n%400==0)
            cout<<"12.09."<<n<<"\n";
        else
            cout<<"13.09."<<n<<"\n";
    }
}
