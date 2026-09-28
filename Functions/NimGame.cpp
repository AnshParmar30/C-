#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    if(n%4 == 0){
        cout<<"The 2nd one win.";
    }
    else{
        cout<<"The 1st one can win.";
    }
    return 0;
}
