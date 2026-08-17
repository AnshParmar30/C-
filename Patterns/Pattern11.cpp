// 5
// 5 4 
// 5 4 3 
// 5 4 3 2  
// 5 4 3 2 1

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int row;
//     cout<<"Enter the row :";
//     cin>> row;
//     for (int i = 1; i <= row; i++)
//     { 
//         int count = row - i +1 ;
//         for(int j = row ; j >= count; j--){
//         cout<< j <<" ";
//         }
//         cout<< endl; 
//     }
    
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the row :";
    cin>> row;
    for (int i = 0; i < row; i++)
    { 
        int count = row - i;
        for(int j = row ; j >= count; j--){
        cout<< j <<" ";
        }
        cout<< endl; 
    }
    
    return 0;
}