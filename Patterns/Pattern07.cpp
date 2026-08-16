// 1
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5


#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int row;
    int col;
    cout<<"Enter the no. of rows : "; 
    cin>>row;
    cout<<"Enter the no. of col : ";
    cin>>col;
    for(int i = 1; i<=row;i++){
        for( int j =1 ;j<=i;j++){
            cout<< j <<" ";
        }
        cout<< endl;

    }
    return 0;
}