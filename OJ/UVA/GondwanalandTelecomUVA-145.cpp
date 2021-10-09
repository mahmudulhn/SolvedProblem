#include<bits/stdc++.h>

using namespace std;

void fast_IO(){ ios_base::sync_with_stdio( false ); cin.tie( NULL );    cout.tie( NULL );   }

void read(){    freopen("in.txt","r",stdin); freopen("out.txt","w",stdout);}

void play(){

   char str[ 3 ];

    double callRate[ 5 ][ 3 ] = { { 0.10, 0.06, 0.02 }, 
    { 0.25, 0.15, 0.05 }, 
    { 0.53, 0.33, 0.13 }, 
    { 0.87, 0.47, 0.17 }, 
    { 1.44, 0.80, 0.30 } };

    while ( cin >> str && str[ 0 ] != '#' ){
        
        char phoneNumber[ 20 ];

        cin >> phoneNumber;

        int startH, startM, endH, endM;

        cin >> startH >> startM >> endH >> endM;

        startH = ( startH * 60 ) + startM;

        endH = ( endH * 60 ) + endM;

        int day = 0, evening = 0, night = 0;

        if( endH <= startH) endH += 1440;

        for( int i = startH + 1; i <= endH; i++ ){

            if( i % 1440 > 480 && i % 1440 <= 1080  ) day++;

            else if ( i % 1440 <= 1320 && i % 1440 > 1080 ) evening++;

            else night++;

        }

        //cout << callRate[ 'A' - str [ 0 ] ][ 0 ] << " " << callRate[ 'A' - str [ 0 ] ][ 1 ] << " " << callRate[ 'A' - str [ 0 ] ][ 2 ] << endl;

        //cout <<  phoneNumber << " " << day << " " << evening << " " << night << " " << str << " " << (day * callRate[ str [ 0 ] - 'A' ][ 0 ]) + (evening * callRate[ str [ 0 ] - 'A' ][ 1 ]) + (night * callRate[ str [ 0 ] - 'A' ][ 2 ]) << endl;
    
        double ans = (day * callRate[ str [ 0 ] - 'A' ][ 0 ]) + (evening * callRate[ str [ 0 ] - 'A' ][ 1 ]) + (night * callRate[ str [ 0 ] - 'A' ][ 2 ]);
        
        printf("%10s%6d%6d%6d%3s%8.2lf\n",phoneNumber, day, evening, night, str, ans);
    }
    

}

int main(){

    //fast_IO;

    //read();

    play();

}
