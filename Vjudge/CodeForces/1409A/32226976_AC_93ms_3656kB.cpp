
#include<bits/stdc++.h>

using namespace std;

void play(){

    int tc;

    while( cin >> tc ){

        while( tc-- ){

            int a, b;

            cin >> a >> b;

            int ans = ( abs( a - b ) % 10 );

            if( ans == 0 ) cout<< abs( a - b ) / 10 << endl;

            //else if( ans % 10 == 0  )    cout<< ans << endl;

            else cout << ( abs( a - b ) / 10 ) + 1 << endl;

        }

    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}

