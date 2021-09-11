#include<bits/stdc++.h>
using namespace std;

void play(){
    int ln,k;
    while(cin>> ln>> k){

        string s;
        cin>> s;
        
        for(int i = 0; i < k; ++i){
            for(int j = 0; j <s.size()-1; ++j){
                if(s[ j ] == 'B' and s[ j+1 ] == 'G'){
                    swap(s[ j ], s[ j+1 ]);
                    j++;
                }
            }
        }
        cout<< s<< endl;
    }
}

int main(){
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    //freopen("in.txt","r",stdin);
    play();
}
