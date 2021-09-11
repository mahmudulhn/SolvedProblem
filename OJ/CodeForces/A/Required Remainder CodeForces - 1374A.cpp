
#include<bits/stdc++.h>

using namespace std;

void play(){

    int tc;

    while( cin >> tc ){



        while( tc-- ){

            int x, y, n;

            cin >> x >> y>>  n;

            int ans = ( n - y ) / x;

            cout <<  ( ans * x ) + y << endl;


        }



    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}


