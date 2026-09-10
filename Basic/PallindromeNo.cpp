#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    // Palindrome no. 
    int ans = 0, rem,q = n;
    while(q>0){
        rem = q%10;
        ans = ans*10 +rem;
        q = q/10;
    }
    cout<<"The original value is : "<<n<<"\n";
    cout<<"The reverse value is : "<<ans<<"\n";
    if(ans == n){
        cout<<"This is a pallindrome no.\n";
    }
    else{
        cout<<"This is not a pallindrome no. \n";
    }
    
    return 0;
}
