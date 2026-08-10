#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<< "Enter a no. : ";
    cin>> n;
    if(n ==1 ){
        cout<<"Sunday";
    }
    else if (n ==2)
    {
        cout<<"Monday";
    }else if (n ==3)
    {
        cout<<"tuesday";
    }else if (n ==4)
    {
        cout<<"wednesday";
    }else if (n ==5)
    {
        cout<<"thrusday";
    }else if (n ==6)
    {
        cout<<"friday";
    }else if (n ==7)
    {
        cout<<"Saturday";
    }
    else{
        cout<<"Wrong Option!";
    }
    return 0;
}
