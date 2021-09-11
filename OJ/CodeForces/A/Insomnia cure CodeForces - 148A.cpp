
#include<bits/stdc++.h>

using namespace std;

void play(){

    int k, l, m, n, d;

    while ( cin >> k >> l >> m >> n >> d ){

        int count = 0;

        bool flag[ d  + 1];

        memset( flag,0, sizeof flag );

        for( int i = k ; i <= d; i += k) flag[ i ] = 1;

        for( int i = l ; i <= d; i += l) flag[ i ] = 1;

        for( int i = m ; i <= d; i += m) flag[ i ] = 1;

        for( int i = n ; i <= d; i += n) flag[ i ] = 1;

        for( int i = 1 ; i <= d; i ++ ){

            if( flag[i] )   count++;

        }

        cout << count <<endl;
    }



}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}
