#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,square; 
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i =1; i<n;){
        square = i*i;
        if(square == n){
            cout<<"the square root is : "<<i;
            return 0;
        }
        else if(square>n){
            cout<<"the square root is : "<< i-1;
            return 0;
        }
        else{
            i += 1;
        }
    }
    return 0;
}



 