
#include<bits/stdc++.h>

using namespace std;

void play(){

    int tc;

    while( cin >> tc ){

        while( tc-- ){

            string n;

            cin >> n;

            int count = 0, x;

            vector< int > v;

            for( int i = 0; i < n.size(); i++){

                if( n[ i ] != '0'){

                    count++;

                    x = n[ i ] - '0';

                    //cout << x << endl;

                    for( int j = 0; j < n.size() - i - 1; j++){

                        x *= 10;

                    }

                    v.push_back(x);

                }

            }

            cout << count << endl;

            for(int i = 0; i < v.size(); i++)   cout << v[ i ] << " ";

            cout << endl;

        }

    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}

