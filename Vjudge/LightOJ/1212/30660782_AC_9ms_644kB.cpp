#include<bits/stdc++.h>

using namespace std;

void play(){

    //freopen("in.txt","r",stdin);

    //freopen("out.txt","w",stdout);

    int tc, k = 1;

    cin >> tc;

    while( tc-- ){

        cout << "Case " << k << ":" <<endl;

        int n, m;

        list< int >l;

        cin >> n >> m;

        while( m-- ){

            string s;

            int x;

            cin >> s ;

            if( s == "pushLeft" ){

                cin >> x;

                if( l.size() == n ) cout << "The queue is full"  << endl;

                else{

                    l.push_front( x );

                    cout << "Pushed in left: " << x  << endl;

                }


            }
            else if( s == "pushRight" ){

                cin >> x;

                if( l.size() == n ) cout << "The queue is full"  << endl;

                else{

                    l.push_back( x );

                    cout << "Pushed in right: " << x  << endl;

                }


            }
            else if( s == "popLeft" ){

                if( l.size() == 0 ) cout << "The queue is empty"  << endl;

                else{

                    x = l.front();

                    l.pop_front();

                    cout << "Popped from left: " << x  << endl;

                }


            }
            else if( s == "popRight" ){

                if( l.size() == 0 ) cout << "The queue is empty"  << endl;

                else{

                    x = l.back();

                    l.pop_back();

                    cout << "Popped from right: " << x  << endl;

                }


            }


        }

        //cout << "Case " << k << ": " << row << " " << col << endl;


        k++;

    }



}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();


}


