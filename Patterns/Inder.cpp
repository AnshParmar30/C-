// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    for(int i = 1; i<=n;i++)
    {
        for(int j = 1;j<=6-i;j++)
        {
            cout<< j<<" ";
        }
        for(int k =1;k<=2*i - 2;k++)
        {
            cout<<"* ";
        }
        for(int l = 6-i; l>=1 ;l--)
        {
            cout<< l<<" ";
        }
        cout<<endl;
    }
    return 0;
}
