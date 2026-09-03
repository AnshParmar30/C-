#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n; 
    cout<<"Enter the value for n : ";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"Sunday";
        break;
        case 2:
        cout<<"Monday";
        break;
        case 3: 
        cout<<"Tuesday";
        break;
        case 4: 
        cout<<"wednesday";
        break;
    
    default:
    cout<<"Invalid Value";
        break;
    }
    return 0;
}
