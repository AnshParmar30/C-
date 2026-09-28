#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>> n;
    int current = 0, prev = 1, last ;
    for (int i=0;i<=n;i++)
  {
    cout<< current <<" ";
    last = current;
    current = current + prev;
    prev = last;   
}
return 0;
}


