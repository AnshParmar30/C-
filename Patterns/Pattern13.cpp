//         1
//       2 2 
//     3 3 3 
//   4 4 4 4
// 5 5 5 5 5
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int row;
    cout<<"Enter the rows : ";
    cin>>row;
    for(int i = 1; i<= row; i++)
    {
        for(int j = 1;j<= row -i;j++)
        {
            cout<<" ";
        }
        for(int k = 1;k<=i;k++)
        {
        cout<< i ;
        }
        cout<< endl;
    }
    return 0;
}
