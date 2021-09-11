
#include<bits/stdc++.h>

using namespace std;

void play(){

    int tc;

    while( cin >> tc ){



        while( tc-- ){

            int n;

            cin >> n;

            int a[ n ];

            int even = 0, odd = 0, mov = 0;

            for( int i = 0; i < n; i++ ){

                cin >> a[ i ];

                if( a[ i ] % 2 == 0) even++;

                else odd++;

                if( i % 2 != a[ i ] % 2) mov++;

            }

            if( mov % 2 == 0 && even >= odd && even - odd < 2)  cout << mov/2 << endl;

            else    cout << -1 << endl;

        }



    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}


