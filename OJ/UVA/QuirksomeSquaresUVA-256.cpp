#include<bits/stdc++.h>

using namespace std;

void fast_IO(){ ios_base::sync_with_stdio( false ); cin.tie( NULL );    cout.tie( NULL );   }

void read(){    freopen("in.txt","r",stdin); /*freopen("out.txt","w",stdout);*/ }


void play(){

    int n;

    vector < int > v[10];

    v[2].push_back(00);
    
    v[2].push_back(01);
    
    v[2].push_back(81);
    
    v[4].push_back(0000);
    
    v[4].push_back(0001);
    
    v[4].push_back(2025);
    
    v[4].push_back(3025);
    
    v[4].push_back(9801);
    
    v[6].push_back(000000);
    
    v[6].push_back(000001);
    
    v[6].push_back(88209);
    
    v[6].push_back(494209);
    
    v[6].push_back(998001);
    
    v[8].push_back(00000000);
    
    v[8].push_back(00000001);
    
    v[8].push_back(4941729);
    
    v[8].push_back(7441984);
    
    v[8].push_back(24502500);
    
    v[8].push_back(25502500);
    
    v[8].push_back(52881984);
    
    v[8].push_back(60481729);
    
    v[8].push_back(99980001);

    while ( cin >> n ){

        for( int i = 0; i < v[ n ].size(); i++ ) cout << setw( n ) << setfill( '0' ) << v[ n ][ i ]  << endl;

    }
   

}

int main(){

    fast_IO;

    read();

    play();

}
