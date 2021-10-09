#include<bits/stdc++.h>

using namespace std;

void fast_IO(){ ios_base::sync_with_stdio( false ); cin.tie( NULL );    cout.tie( NULL );   }

void read(){    freopen("in.txt","r",stdin); }

void play(){

    for( long long i = 0, j = 8; i < 10; j++ ){

        if( ( long long )sqrt( ( (j * j ) + j ) / 2) == ( double )sqrt( ( (j * j ) + j ) / 2) ){
            
             cout <<setw( 10 )<<( int )sqrt( ( (j * j ) + j ) / 2) <<setw( 10 )<< j << endl;

             i++;

        }

    }

}

int main(){

    fast_IO;

    //read();

    play();

}
