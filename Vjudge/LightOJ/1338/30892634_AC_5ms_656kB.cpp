
#include<bits/stdc++.h>

using namespace std;

long long fact[ 21 ];


void play(){



    //freopen("in.txt","r",stdin);

    //freopen("out.txt","w",stdout);

    int tc, k = 1;

    cin >> tc;

    cin.ignore();

    while( tc --){

        string s1, s2;

        //cin >> s1 >> s2;

        getline (cin, s1);

        getline (cin, s2);

        //scanf("%s",s1,s2);

        //cout<<s1<<"     "<<s2<<endl;

        string  str1 = "", str2 = "";

        for( int i = 0; i < s1.size(); i++) {

            if(s1 [ i ] >='A' && s1 [ i ] <='Z' && s1[ i ] !=' ')    str1 += s1[ i ] + 32;

            else  if( s1[ i ] !=' ')     str1 += s1[ i ];

        }

        sort(str1.begin(),str1.end());

        for( int i = 0; i < s2.size(); i++) {

            if(s2 [ i ] >='A' && s2 [ i ] <='Z' )    str2 += s2[ i ] + 32;

            else  if( s2[ i ] !=' ')   str2 += s2[ i ];

        }

        sort(str2.begin(),str2.end());

        //cout<<str1<<" "<<str2<<endl;



        if( str1 == str2) cout << "Case "<< k <<": "<< "Yes" << endl;

        else cout << "Case "<< k <<": "<< "No" << endl;

        k++;
    }

}

int main(){

    //ios_base::sync_with_stdio( false );

    //cin.tie( NULL );

    //cout.tie( NULL );

    play();


}


