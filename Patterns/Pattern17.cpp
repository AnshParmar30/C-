// *
// * *
// * * *
// * * * * 
// * * * * *
// * * * *
// * * *
// * *
// * 

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int row;
    cout<<"Enter the rows : ";
    cin>>row;
    for(int i = 1; i<= row; i++)
    {
       for(int j = 1;j<=i;j++)
       {
        cout<<"*";
       } 
       cout<<endl;
    }
    for(int l = 1;l<row; l++){
        for(int k= 1; k<= row - l; k++)
        {
        cout<<"*";
        }
        cout<< endl;
    }
    return 0;
}