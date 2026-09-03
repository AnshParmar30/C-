#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int marks;
    cout<<"Enter marks : ";
    cin>> marks;
    if(marks>90){
        cout<<"execlent";      
    }
    else if (marks>60)
    {
        /* code */cout<<"Just Pass";
    }
    else if(marks>50){
        cout<<"Fail by few marks";
    }
    else{
        cout<<"Failed";
    }
    
    return 0;
}
