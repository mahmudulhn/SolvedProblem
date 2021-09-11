#include<bits/stdc++.h>
using namespace std;

void play(){
    //freopen("in.txt", "r", stdin);


    string s;
    while( cin>> s){

        string revs = s;
        reverse(s.begin(),s.end());
        int count_=0;

        for(int i = 0; i < s.size(); i++)
            if( s[i] != revs[i]) count_++;
        if(s == revs ){
            if( s.size()%2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(count_<=2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    play();

}
