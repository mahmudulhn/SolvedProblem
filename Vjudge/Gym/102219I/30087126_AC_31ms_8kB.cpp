#include<bits/stdc++.h>

using namespace std;

void play(){

    string s[3], ans = "";

    bool flag = false;

    for( int i = 0; i < 3; i++){

        cin >>s[i];

        //cout<<s[]<<endl;

        for( int j = 0; j < 10; j++) {

            //cout<<s[0]<<endl;


            if(s[ i ][ j ] ==  '=' && ans.size() == 0){

                //cout<< s[ i ][ j ]  <<endl;

                if( j == 9 && s[ i ] [ j ] == '=' )    flag = true;


                j++;

                while( s[ i ] [ j ] == '.' && j < 9)    j++;

                if( j == 9 && s[ i ] [ j ] == '.' )    flag = true;

                else {

                    ans += s[ i ][ j ];

                    false;

                }

            }

        }

    }

    if( flag )  cout << "You shall pass!!!" <<endl;

    else    cout << ans <<endl;

}

int main(){

    ios_base::sync_with_stdio(false);

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}
