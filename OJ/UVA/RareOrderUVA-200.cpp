#include<bits/stdc++.h>

using namespace std;

void fast_IO(){ ios_base::sync_with_stdio( false ); cin.tie( NULL );    cout.tie( NULL );   }

void read(){    freopen("in.txt","r",stdin); /*freopen("out.txt","w",stdout);*/ }

string s, temp="";

set < char > st;

set < char >:: iterator it;

bool vis[ 500 ];

vector < char > gp[ 500 ];

stack < char > ans;

void DFS( char n){


    if( vis[ n ] ) return;

    vis[ n ] = true;

    for( int i = 0; i < gp[ n ].size(); i++ )   DFS( gp[ n ][ i ] );

    ans.push( n );
}

void play(){

   

   while ( cin >> s && s != "#" ){

       //cout << s << endl;

       for( int i = 0; i < min( s.size(), temp.size() ); i++ ){

           if( s[ i ] != temp[ i ]){

               st.insert( temp[ i ]);

                gp[ temp[ i ] ].push_back( s[ i ]  );

                break;

           }

           

           
       }

        temp = s;       

   }

   for( it = st.begin(); it != st.end(); it++ ){

       if(! vis[ *it ] ) DFS( *it  );

   }
   
   while ( !ans.empty() ){

       char c = ans.top();

       cout << c;

       ans.pop();

   }
   
   cout << endl;

    
   
   

}

int main(){

    fast_IO;

    //read();

    play();

}
