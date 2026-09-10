#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    int rem, ans = 0;
    while(n != 0){
        rem = n%10;
        n = n/10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10){
            cout<<"Overflow";
            return 0;
        }
        ans = ans*10 + rem;
    }
    cout<<"The answer is : "<<ans;
    return 0;
}
