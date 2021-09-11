#include<bits/stdc++.h>

using namespace std;

void play(){

    int tc;

    while( cin >> tc ){

        while( tc-- ){

            int n;

            cin >> n;

            string a ;

            int f[ 26 ];

            memset(f, 0, sizeof f);

            bool flag = 0;

            //for(int i = 0; i < n; i++ )
            cin >> a;


            for(int i = 0; i <  n; i++){

                if( a[ i ] != a [ i + 1 ] && f[ a[ i ] - 'A'] == 0)  f[ a[ i ] - 'A'] = 1;

                else if( a[ i ] == a [ i + 1 ])  continue;

                else flag = 1;

            }

            if(!flag)    cout << "YES" << endl;

            else    cout << "NO" << endl;

        }



    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}



