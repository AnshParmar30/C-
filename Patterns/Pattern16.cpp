//         1
//       2 1
//     3 2 1
//   4 3 2 1 
// 5 4 3 2 1 
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int row;
    cout<<"Enter the rows : ";
    cin>>row;
    for(int i =1 ; i<= row; i++)
    {
        // for spacing
        for(int j = 1;j<= row -i;j++)
        {
            cout<<" ";
        }
        // for text :
        for(int k = i;k>=1;k--)
        {
            cout<<k;
        }
        cout<< endl;
    }
    return 0;
}