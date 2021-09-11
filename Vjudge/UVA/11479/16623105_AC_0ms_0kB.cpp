#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long test,a[3];
    cin>>test;
    long long i=test;
    while(test--)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]+a[1]<=a[2])
            cout<<"Case "<<i-test<<": Invalid\n";
        else if(a[0]==a[1]&&a[2]==a[1])
            cout<<"Case "<<i-test<<": Equilateral\n";
        else if(a[0]==a[1]||a[2]==a[1]||a[0]==a[2])
            cout<<"Case "<<i-test<<": Isosceles\n";
        else
            cout<<"Case "<<i-test<<": Scalene\n";
    }
    return 0;
}
