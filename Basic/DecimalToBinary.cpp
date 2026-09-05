// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//    int n;
//    cout<<"Enter the value for n: ";
//    cin>>n;
//    int ans = 0;
//    int rem;
//    int i = 0;
//     while(n!=0)
//     {
//         rem = n%2;
//         ans = rem*pow(10,i)+ans;
//         n = n/2;
//         i++;
//     }
//     cout<<"The value of ans is : "<<ans;
//     return 0;
// }



// Another way : 

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
   int n;
   cout<<"Enter the value for n: ";
   cin>>n;
   int mul = 1;
   int ans = 0;
   int rem;
    while(n>0)
    {
        rem = n%2;
        n = n/2;
        ans = rem*mul+ans;
        mul = mul*10;
       
    }
    cout<<"The value of ans is : "<<ans;
    return 0;
}

