#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the value for n : ";
    cin>>n;
    int i=0;
    int ans = 0;
    int r;
    while(n>0){
        r = n%10;
        n = n/10;
        ans = r*pow(2,i) +ans;
        i++;
    }
    cout<<ans;
    return 0;
}


