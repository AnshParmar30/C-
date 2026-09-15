
// check the no. is prime or not and the factorial of a no. 

#include<iostream>
using namespace std;
bool prime(int n){
    if(n<2){
        return 0;
    }
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
int fact(int n){
    int ans = 1;
    for(int i = 1; i<=n; i++){
        ans = ans*i;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<prime(a)<<"\n";
    cout<<fact(a)<<"\n";
    cout<<fact(b)<<"\n";
    cout<<prime(b)<<"\n";
    return 0;
}



