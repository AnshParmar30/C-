// #include<iostream>
// using namespace std;
// int main()
// {
//     int sum = 0;
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     if(n<0){
//         cout<<"not valid!";
//         return 0;
//     }
//     while (n>1)
//     {
//         int rem = n%2;
//         n = n/2;
//         sum = sum + rem;
//     }
//     if(sum == 0){
//         cout<<"Comes.";
//     }
//     else{
//         cout<<"Not Comes.";
//     }
    
//     return 0;
// }


// Better approach : 


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    if(n>0 &&(n&(n-1)) == 0){
        cout<<" The no. Comes.";
    }
    else{
        cout<<" The no. Not Comes.";
    }
    
    return 0;
}
