

#include<bits/stdc++.h>

using namespace std;

long long fact[ 21 ];

void preCal(){

    fact[ 0 ] = 1;

    for( int i = 1; i < 21; i++)    fact[ i ] = i * fact[ i - 1];


}



void play(){

    //preCal();

    //freopen("in.txt","r",stdin);

    //freopen("out.txt","w",stdout);

    int tc, k = 1;

    cin >> tc;

    while( tc --){


        int r1, c1, r2, c2;

        cin >> r1 >> c1 >> r2 >> c2;

        if ( ( abs(r1 - r2) % 2 ) != ( abs(c1 - c2) % 2 ) ) cout << "Case "<< k <<": "<< "impossible" << endl;

        else{

            if(  abs(r1 - r2)  ==  abs(c1 - c2) ) cout << "Case "<< k <<": "<< 1 << endl;

            //else if( r1 == r2 || c1 == c2 )  cout << "Case "<< k <<": "<< 3 << endl;

            else    cout << "Case "<< k <<": "<< 2 << endl;



        }

        k++;
    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();


}

