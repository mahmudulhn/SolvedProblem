
#include<bits/stdc++.h>

using namespace std;

void play(){

    int tc;

    while( cin >> tc){

        while( tc-- ){

            int a, b;

            cin >> a >> b;
            
            int ans = ( ( ( a / b ) + 1 ) * b ) - a;
            
            if( ans == b)   cout << 0 <<endl;

            else cout << ans <<endl;

        }

    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}

