
#include<bits/stdc++.h>

using namespace std;

void play(){

    int tc;

    while( cin >> tc ){



        while( tc-- ){

            int n;

            cin >> n;

            long long a[ n ], b[ n ];

            long long minb = 1000000000000, mina = 1000000000000, mov = 0;

            for( int i = 0; i < n; i++ ){

                cin >> a[ i ];

                mina = min(mina, a[ i ]);

            }

            for( int i = 0; i < n; i++ ){

                cin >> b[ i ];

                minb = min(minb, b[ i ]);

            }

            for( int i = 0; i < n; i++ ){

                mov += max(a[ i ] - mina, b[ i ] - minb);

            }

            cout << mov << endl;

        }



    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}


