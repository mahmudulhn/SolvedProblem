#include<bits/stdc++.h>

using namespace std;

void play(){

    int n, m;

    cin >> n >> m;

    int a[ n ], b[ m ];

    for( int i = 0 ; i < n ; i++ )  cin >> a[ i ];

    for( int i = 0 ; i < m ; i++ )  cin >> b[ i ];

    int ans = 0;

    for( int i = 0 ; i < n ; i++ )  ans += ( b[ i ] - a[ i ] );

    if( n < m){

        for( int i = n ; i < m ; i++ )  ans += ( b[ i ] );

    }

    cout << ans <<endl;

}

int main(){

    ios_base::sync_with_stdio(false);

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}
