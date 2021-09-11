
#include<bits/stdc++.h>

using namespace std;

void play(){

    int tc;

    while( cin >> tc ){

        if( tc % 2 == 0 )   cout << 4 << " " << tc - 4 << endl;

        else    cout << 9 << " " << tc - 9 << endl;

    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}

