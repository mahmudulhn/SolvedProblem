
#include<bits/stdc++.h>

using namespace std;

void play(){

    int tc;

    while( cin >> tc ){

        while( tc-- ){

            string b;

            cin >> b;

            if( b.size() == 2)  cout << b <<endl;

            else{

                string a = "";

                a += b[ 0 ];

                for(int i = 1; i < b.size() - 1; i += 2 )  a += b[ i ];

                a += b[ b.size() - 1 ];

                cout << a << endl;

            }

        }

    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}

