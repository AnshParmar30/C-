// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int row;
    int col;
    int n = 1;
    cout<<"Enter the no. of rows : "; 
    cin>>row;
    cout<<"Enter the no. of col : ";
    cin>>col;
    for(int i = 1; i<=row;i++){
        for( int j =1 ;j<=col;j++){
            cout<< n <<" ";
            n = n+1;
        }
        cout<< endl;

    }
    return 0;
}