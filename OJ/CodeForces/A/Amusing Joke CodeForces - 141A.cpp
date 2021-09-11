
#include<bits/stdc++.h>

using namespace std;

void play(){

    string guest, host, pil;

    while( cin >> guest >> host >> pil ){

        int g[26], p[26];

        memset(g, 0, sizeof g);

        //memset(h, 0, sizeof h);

        memset(p, 0, sizeof p);

        for( int i = 0 ; i < guest.size(); i ++ )   g[ guest[ i] - 'A']++;

        for( int i = 0 ; i < host.size(); i ++ )   g[ host[ i] - 'A']++;

        for( int i = 0 ; i < pil.size(); i ++ )   p[ pil[ i] - 'A']++;

        bool flag = 0;

        for( int i = 0; i < 26; i++){

            if(g[ i ] != p[ i ])    flag = 1;
        }
        if( !flag )    cout << "YES" <<endl;

        else    cout << "NO" <<endl;


    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}

