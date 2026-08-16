// print : 
// 1 4 9 16 25 
// 1 4 9 16 25 
// 1 4 9 16 25 
// 1 4 9 16 25 
// 1 4 9 16 25 

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int row, col;
    cout<<"Enter the no. of rows : ";
    cin>>row;
    cout<<"Enter the no. of col : ";
    cin>>col;
    for(int i = 1; i<=row;i++){
        for(int j = 1;j<=col;j++){
            cout<< j*j<<" ";
        }
        cout<< endl;
    }
    return 0;
}
