#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,j, var;
    cout<<"Enter the value of n : "; 
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        var = 5;
        j = i;
        while(var>=1){
            cout<< j<<" ";
            j++;
            var--;
        }
        cout<<endl;
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n,temp;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i = 1;i<=n;i++){
//         temp = 5;
//     while(temp>=0){
//         if(i%2 == 0){
//             cout<<"1"<<" ";
//         }
//         else{
//             cout<<"0"<<" ";
//         } 
//         i++;
//         temp--;        
//     }
//     cout<<endl;
// }
//     return 0;
// }