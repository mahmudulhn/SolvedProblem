#include<bits/stdc++.h>
using namespace std;
#define Pi acos(-1)
int main(){
    double R,n;
    while(cin>>R>>n){
        double angle=360/(n*2);
        angle=sin(angle*(Pi/180));
        double r=(angle*R)/(1+angle);
        double thirdAm=(R-r)*cos((360/(n*2))*(Pi/180));
        double s=((R-r)+r+thirdAm)/2;
        double areaOfTriAngle=sqrt(s*(s-(R-r))*(s-r)*(s-thirdAm));
        double areaOfSmallCircle=Pi*r*r;
        double thirdAngle=180-(90+(360/(n*2)));
        double ans1=areaOfTriAngle-((areaOfSmallCircle/360)*thirdAngle);
        ans1=(ans1*n*2);
        double ans2=(Pi*R*R)-(ans1+(areaOfSmallCircle*n));
        if(n==1){
            cout<<fixed<<setprecision(10);
            cout<<R<<" "<<0.0<<" "<<0.0<<endl;
            continue;
        }
        cout<<fixed<<setprecision(10);
        cout<<r<<" "<<ans1<<" "<<ans2<<endl;

    }
}
