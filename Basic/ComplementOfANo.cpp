#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    int ans = 0, rem, mul = 1;
    while (n>0)
    {
        rem = n%2;
        if(rem == 1){
            rem = 0;
        }
        else{
            rem = 1;
        }
        ans = rem*mul + ans;
        mul *= 2;
        n = n/2;
    }
    cout<< ans;
    
    return 0;
}
