
#include<bits/stdc++.h>
using namespace std;

void play(){
    //freopen("in.txt", "r", stdin);


    int n;
    while( cin>> n){
        vector<int>v1;
        vector<int>v2;
        if(n % 2){
            cout<< "YES"<< endl;
            int i=1;
            while(i <= (n * 2)){
                v1.push_back(i++);
                v2.push_back(i++);
                if(i > (n * 2)) break;
                v2.push_back(i++);
                v1.push_back(i++);
            }
            for( int j = 0; j < v1.size(); j++) cout<< v1[ j ] <<" ";
            for( int j = 0; j < v2.size(); j++) cout<< v2[ j ] <<" ";
            cout<< endl;
        }
        else cout<< "NO"<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    play();

}
