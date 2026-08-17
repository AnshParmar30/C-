
// * * * * * 
// * * * *
// * * *
// * * 
// * 

// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int row, col;
//     cout<<"Enter the row :";
//     cin>> row;
//     // cout<<"Enter the col : ";
//     // cin>> col;
//     for (int i = 1; i <= row; i++)
//     {
//         for(int j = row; j >= i; j--){
//         cout<< "*" <<" ";
//         }
//         cout<< endl; 
//     }
    
//     return 0;
// }

// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int row;
    cout<<"Enter the row :";
    cin>> row;
    for (int i = 0; i < row; i++)
    {
         int count = row -i;
        for(int j = 1 ; j <= count; j++){
        cout<< j <<" ";
        }
        cout<< endl; 
    }
    
    return 0;
}