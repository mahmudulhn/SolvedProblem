#include<bits/stdc++.h>

using namespace std;

void play(){

    int tc;

    while( cin >> tc ){

        while( tc-- ){

            int n;

            cin >> n;

            int a [ n ];

            for(int i = 0; i < n; i++ ) cin >> a[ i ];

            sort(a, a + n);

            int min_ = 100000;

            for( int i = 1; i < n; i++ ){

                min_ = min( min_, a[ i ] - a[ i - 1 ]);
            }


            cout << min_ << endl;

        }



    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}



