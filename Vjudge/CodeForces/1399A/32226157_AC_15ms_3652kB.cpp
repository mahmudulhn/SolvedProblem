
#include<bits/stdc++.h>

using namespace std;

void play(){

    int tc;

    while( cin >> tc ){

        while( tc-- ){

            int n;

            cin >> n;

            int a[ n ];

            bool flag = 0;

            for( int i = 0; i < n; i++) cin >> a[ i ];
            
            sort(a, a + n );

            for( int i = 1; i < n; i++){

                //if( !i ) flag = 0;

                if( abs(a[ i ] - a[ i - 1 ] ) > 1 ) flag = 1;

            }

            if( flag == 0 ) cout << "YES" << endl;

            else cout << "NO" << endl;

        }

    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}

