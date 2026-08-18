//         A
//       A B
//     A B C
//   A B C D
// A B C D E


#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    char row;
    cout<<"Enter the rows : ";
    cin>>row;
    for(char i = 'A'; i<= row; i++)
    {
        for(char j = 1;j<= row -i;j++)
        {
            cout<<" ";
        }
        for(char k ='A';k<=i;k++)
        {
        cout<< k ;
        }
        cout<< endl;
    }
    return 0;
}

