#include<iostream>
using namespace std;
void swap(int& x,int& y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 2;
    // cin>>a >> b;
    swap (a,b);
    cout<<"a is : "<<a<<"\n";
    cout<<"b is : "<<b<<"\n";

    // inbuilt functions : swap function :
    swap(a,b);
    cout<<a<<b;
    return 0;
}
