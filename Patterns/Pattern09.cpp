// 1
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int row, col;
    cout<<"Enter the row :";
    cin>> row;
    // cout<<"Enter the col : ";
    // cin>> col;
    for (int i = 1; i <= row; i++)
    {
        for(int j = i; j >= 1; j--){
        cout<< j <<" ";
        }
        cout<< endl; 
    }
    
    return 0;
}