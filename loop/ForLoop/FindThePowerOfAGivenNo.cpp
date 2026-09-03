#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) 
{
    int n;
    cout<<"Enter the value";
    cin>> n;
    int pow = 4;
    int ans = 1;
    for(int i=1;i<=pow;i++){
         ans = ans*n;
    }
    cout<< ans;
    return 0;
}
