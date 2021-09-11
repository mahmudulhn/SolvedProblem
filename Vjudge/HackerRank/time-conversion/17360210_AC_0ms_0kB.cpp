#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[100];
    scanf("%s",a);
    int h;
    h=(a[0]-'0')*10+(a[1]-'0');
    int m;
    m=(a[3]-'0')*10+(a[4]-'0');
    int s;
    s=(a[6]-'0')*10+(a[7]-'0');
    if((a[8]=='P'&&h!=12)||(a[8]=='A'&&h==12))
        printf("%02d:%02d:%02d",(h+12)%24,m,s);
    else
        printf("%02d:%02d:%02d",h,m,s);
}
