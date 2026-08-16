// print 
// 1111
// 2222
// 3333
// 4444

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
            cout<< i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
