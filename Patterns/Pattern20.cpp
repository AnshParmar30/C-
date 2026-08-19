//         1 
//       1 2 3 
//     1 2 3 4 5 
//   1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7 8 9 


// #include<iostream>
// using namespace std;
// int main()
// {
//     int row; 
//     cout<<"Enter the row : ";
//     cin>> row;
// for(int i = 1; i <= row; i++)
// {
//     for(int j = 1; j <= 2*(row-i); j++)
//     {
//         cout << " ";
//     }

//     for(int k = 1; k <= 2*i-1; k++)
//     {
//         cout << k<<" ";
//     }

//     cout << endl;
// }
//     return 0;
// }





//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1 


#include<iostream>
using namespace std;
int main()
{
    int row; 
    cout<<"Enter the row : ";
    cin>> row;
for(int i = 1; i <= row; i++)
{
    for(int j = 1; j <= 2*(row-i); j++)
    {
        cout << " ";
    }

    for(int k = 1; k <=i; k++)
    {
        cout << " " << k;
    }
    for(int l = i-1; l>=1;l--){
        cout<< " " << l;
    }

    cout << endl;
}
    return 0;
}