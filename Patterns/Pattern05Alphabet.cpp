// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e 


// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int row;
//     char col;
//     cout<<"Enter the no. of rows : "; 
//     cin>>row;
//     cout<<"Enter the no. of col : ";
//     cin>>col;
//     for(int i = 1; i<=row;i++){
//         for(char j = 97;j<=col;j++){
//             cout<< j <<" ";
//         }
//         cout<< endl;
//     }
//     return 0;
// }


// print : 
// aaaaa
// bbbbb
// ccccc
// ddddd
// eeeee 

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    char row;
    int col;
    cout<<"Enter the no. of rows : "; 
    cin>>row;
    cout<<"Enter the no. of col : ";
    cin>>col;
    for(char i = 'a'; i<=row;i++){
        for( int j = 1;j<=col;j++){
            cout<< i <<" ";
        }
        cout<< endl;
    }
    return 0;
}