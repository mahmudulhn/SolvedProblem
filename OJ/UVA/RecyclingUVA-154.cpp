#include<bits/stdc++.h>

using namespace std;

void fast_IO(){ ios_base::sync_with_stdio( false ); cin.tie( NULL );    cout.tie( NULL );   }

void read(){    freopen("in.txt","r",stdin); /*freopen("out.txt","w",stdout);*/ }

void play(){

   string s;

    vector< unordered_map < char, char > > v;

    unordered_map < char, char >mp;

    vector < int > ans;
       
    int n = 0;

   while ( cin >> s && s != "#"){ 

       if( s[ 0 ] != 'e'){
           
            n++;

            mp[ s[ 0 ] ] = s[ 2 ];

            mp[ s[ 4 ] ] = s[ 6 ];

            mp[ s[ 8 ] ] = s[ 10 ];

            mp[ s[ 12 ] ] = s[ 14 ];

            mp[ s[ 16 ] ] = s[ 18 ];

            v.push_back( mp );

            //cout << "OK" <<endl;

       }

       else{

           int count = 0;

           for( int i = 0; i < n; i++ ){

               count = 0;

               for( int j = 0; j < n; j++){

                   if( i != j ){

                       if( v[ i ][ 'r' ] != v[ j ][ 'r' ] ) count++;

                       if( v[ i ][ 'o' ] != v[ j ][ 'o' ] ) count++;

                       if( v[ i ][ 'y' ] != v[ j ][ 'y' ] ) count++;

                       if( v[ i ][ 'g' ] != v[ j ][ 'g' ] ) count++;

                       if( v[ i ][ 'b' ] != v[ j ][ 'b' ] ) count++;

                       //cout << count << endl;

                   }


               }

               ans.push_back( count );
           }
            
            cout << min_element( ans.begin(), ans.end() ) - ans.begin() + 1 <<endl;

            mp.clear();

            /*for ( int i = 0; i < n ; i++){
                
                v[ i ].clear();

            }*/

            v.clear();
            
            n = 0;

            ans.clear();

       }
   }
   

}

int main(){

    fast_IO;

    read();

    play();

}
