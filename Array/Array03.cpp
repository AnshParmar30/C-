// Fibonacci Series using array : 

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int arr[n] = {0,1};
    for(int i = 2; i<n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    for(int j =0;j<n; j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}
