#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) 
{
    int n;
    cout<<"Enter the value of n to print the table";
    cin>>n;
    for(int i = 1; i<=20; i++){
        cout<< n<<" * "<<i <<"= " << n*i <<"\n";
    }
    return 0;
}
