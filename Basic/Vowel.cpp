#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    char name;
    cout<< "Enter any character b/w a to z : ";
    cin>> name;
    if(name =='a'|| name =='e' || name =='i' || name=='o' || name =='u')
    {
        cout<<"Vowel";
    }
    else{
        cout<<"Consenent";
    }
    return 0;
}
