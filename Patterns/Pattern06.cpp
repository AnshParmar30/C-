// print :
// * 
// **
// ***
// ****
// *****

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int row;
    int col;
    cout<<"Enter the no. of rows : "; 
    cin>>row;
    for(int i = 1; i<=row;i++){
        for( int j =1 ;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<< endl;

    }
    return 0;
}