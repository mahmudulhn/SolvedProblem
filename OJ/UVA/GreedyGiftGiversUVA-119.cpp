#include<bits/stdc++.h>

using namespace std;

void fast_IO(){ ios_base::sync_with_stdio( false ); cin.tie( NULL );    cout.tie( NULL );   }

void read(){    freopen("in.txt","r",stdin); }

void play() {

    int n;

    bool flag = false;

    while( cin >> n){



        if(flag)    cout << endl;

        map< string, int > mp;

        map< string, int >:: iterator it;

        int members[ n ], money, numOfPersion;

        memset( members, 0, sizeof members);

        string name;



        for( int i = 0; i < n; i++ ){

            cin >> name;

            mp[ name ] = i;


        }

        //for( it = mp.begin(); it != mp.end(); it++ ) cout << it-> first << " " << it-> second <<endl;

        for( int i = 0; i < n; i++ ){


            //cout << 4 <<endl;

            cin >> name >> money >> numOfPersion;

            if( numOfPersion != 0 ){

                members[ mp[ name ] ] -= money;

                //cout << mp[ name ] <<endl;

                members[ mp[ name ] ] += money - ( ( money / numOfPersion ) * numOfPersion);

                for( int j = 0; j < numOfPersion; j++ ){

                    cin >> name;

                    members[ mp[ name ] ] += money / numOfPersion;

                }

            }



        }




        for( int i = 0; i < n; i++ ){



            for( it = mp.begin(); it != mp.end(); it++ ) {

                if( it->second == i )    cout <<it->first<< " " << members[ i ]<<endl;

                //else cout <<" OK " <<endl;

            }


        }

        flag = true;




    }

}

int main(){

    fast_IO;

    //read();

    play();

}
