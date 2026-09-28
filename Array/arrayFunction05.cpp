
// pass array to the function : 

// #include<bits/stdc++.h>
// using namespace std;
// void func(int a[],int n){

//     cout<<"The size of func :  "<<sizeof(a)<<endl;
//     for(int i = 0; i<n; i++){

//         cout<<a[i]<<" ";
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int arr[5] = {1,2,3,4,5};
//     cout<<"The size of array is : "<<sizeof(arr)<<endl;
//     func(arr,5);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    char ch;
    cout<<"Enter the char : ";
    cin>>ch;
    for(int i = 1; i<=ch; i++){
        cout<<ch*i<<endl;

    }
    return 0;
}
