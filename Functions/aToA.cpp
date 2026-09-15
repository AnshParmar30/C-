#include<iostream>
using namespace std;
char change(char ch){
    char ans = ch - 'a' + 'A';
    return ans;
}
int main(int argc, char const *argv[])
{
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    cout<<change(ch);
    return 0;
}
