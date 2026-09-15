
// Finding trailing zeros in n!.

#include<iostream>
using namespace std;
int main()
{
    int n,count = 0;
    cout<<"Enter the value of n : ";
    cin>>n;
    while(n>=5){
        n = n/5;
        count += n;
    }
    cout<<"the no. of Zero's are : "<<count<<"\n";
    return 0;
}
