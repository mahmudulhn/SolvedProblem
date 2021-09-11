#include<bits/stdc++.h>

using namespace std;



void play(){

    //freopen("in.txt","r",stdin);

    //freopen("out.txt","w",stdout);

    int tc, k = 1;

    cin >> tc;

    while( tc --){

        map< int, int >mp;

        map< int, int >::iterator it;

        long long  n, sum = 0, x;

        cin >> n;

        while( n-- ){

            cin >> x;

            if( x < 0) mp[ -1 * x ] = x;

            else    mp[ x ] = x;


        }

        for( it = mp.begin(); it != mp.end(); it++ ) sum += it->second;

        cout << "Case "<< k <<": "<< sum << endl;

        k++;
    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();


}

