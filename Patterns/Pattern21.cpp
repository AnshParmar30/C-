// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         * 



#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int row;
    cout<<"Enter the no. of rows : ";
    cin>>row;
    for(int i = 1; i<=row; i++){
        for(int j = 1; j<=2*(i-1); j++){
            cout<<" ";
        }
        for(int k = row; k>=2*i-1; k--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}