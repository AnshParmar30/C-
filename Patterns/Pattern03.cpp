// print : 
// 54321
// 54321
// 54321
// 54321
// 54321



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
        for(int j = col;j>=1;j--){
            cout<< j<<" ";
        }
        cout<< endl;
    }
    return 0;
}
