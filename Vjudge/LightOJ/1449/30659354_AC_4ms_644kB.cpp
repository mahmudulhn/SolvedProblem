#include<bits/stdc++.h>

using namespace std;

void play(){

    //freopen("in.txt","r",stdin);

    int tc, k = 1;

    cin >> tc;

    while( tc-- ){

        string s;

        cout << "Case " << k << ": ";

        cin >> s;

        for( int i = 0; i < s.size(); i++ ){

            if( s[ i ] != 's' && i == 4) cout  << 's';

            cout  << s[ i ];

        }

        cout  << endl;

        k++;

    }



}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();


}


