
#include<bits/stdc++.h>

using namespace std;

void play(){

    int tc;

    while( cin >> tc){

        string s;

        cin >> s;

        int a[ 26 ];
        
        memset(a, 0, sizeof a);

        int count = 0;

        for( int i = 0; i < tc; i++){

            if( s[ i ]>= 'a' )  a[ s[ i] - 'a' ] = 1;

            else if( s[ i ]>= 'A' )  a[ s[ i] - 'A' ] = 1;
        }

        for( int i = 0; i < 26; i++){

            if( a[ i ] == 1 )  count ++;
        }

        if( count == 26)    cout << "YES" <<endl;

        else    cout << "NO" <<endl;


    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}

