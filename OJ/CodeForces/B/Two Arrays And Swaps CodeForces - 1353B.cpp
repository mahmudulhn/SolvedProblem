
#include<bits/stdc++.h>

using namespace std;

void play(){

    int tc;

    while( cin >> tc ){



        while( tc-- ){

            int n, k;

            cin >> n >> k;

            int a[ n ], b[ n ], sum = 0;

            for( int i = 0; i < n; i++ )    cin >> a[ i ];

            sort(a, a + n);

            for( int i = 0; i < n; i++ )    cin >> b[ i ];

            sort(b, b + n);

            reverse(b, b + n );

            for( int i = 0; i < k; i++ ){

                if( a[ i ] <= b[ i ])   swap(a[ i ], b[ i ]);

                else break;

            }

            for(int i = 0; i < n; i++ ) sum += a[ i ];

            cout <<  sum << endl;


        }



    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}


