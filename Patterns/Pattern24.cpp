//    *
//   * *
//  * * *
// * * * *
// * * * *
//  * * *
//   * *
//    *


// #include<iostream>
// using namespace std;
// int main()
// {
//     int row; 
//     cout<<"Enter the row : ";
//     cin>> row;

// for(int i = 1; i <= row; i++)
// {
//     for(int j =1;j<=row - i;j++) 
//     {
//         cout<<"  ";
//     }
//     for(int k =1;k<=i;k++)
//     {
//         cout<<"  * ";
//     }
//     cout<<endl;
// }
// for(int i = 1; i <= row; i++)
// {
//     for(int j = 1; j <= i-1 ; j++)
//     {
//         cout << "  ";
//     }
//     for(int k = row; k >= i; k--)
//     {
//         cout <<"  * " <<"";
//     }
//     cout << endl;
// }

//     return 0;
// }



#include<iostream>
using namespace std;
int main()
{
    int row; 
    cout<<"Enter the row : ";
    cin>> row;

for(int i = 1; i <= row; i++)
{
    for(int j =1;j<=row - i;j++) 
    {
        cout<<" ";
    }
    for(int k =1;k<=i;k++)
    {
        cout<<"* ";
    }
    cout<<endl;
}
for(int i = 1; i <= row; i++)
{
    for(int j = 1; j <= i-1 ; j++)
    {
        cout << " ";
    }
    for(int k = row; k >= i; k--)
    {
        cout <<"* ";
    }
    cout << endl;
}

    return 0;
}
