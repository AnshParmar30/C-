// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *


#include<iostream>
using namespace std;
int main()
{
    int row; 
    cout<<"Enter the row : ";
    cin>> row;
for(int i = 1; i <= row; i++)
{
    for(int j = row; j >=i ; j--)
    {
        cout << "*";
    }
    for(int k = 1; k <=2*i -2; k++)
    {
        cout<<" ";
    }
   for(int j = row; j >=i ; j--)
    {
        cout << "*";
    }
   
    cout << endl;
}

for(int i = 1; i <= row; i++)
{
    for(int j =1;j<=i;j++) 
    {
        cout<<"*";
    }
    for(int k =1;k<=2*row - 2*i;k++)
    {
        cout<<" ";
    }
    for(int j =1;j<=i;j++) 
    {
        cout<<"*";
    }
    cout<<endl;
}
    return 0;
}

// Now I am here?????????????????????????????????? 