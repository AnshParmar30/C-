// 27 = 2+7  = 9.


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, ans = 0, rem;
//     cout<<"Enter the value of n. : ";
//     cin>>n;
//     while(n>0){
//         rem = n%10;
//         ans = rem + ans;
//         n = n/10;
//     }
//     cout<<ans;
//     return 0;
// }

// 279 = 2+7+9 = 18 = 1+8 = 9.


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, ans = 0, rem;
//     cout<<"Enter the value of n. : ";
//     cin>>n;
//     while(n>0){
//         rem = n%10;
//         ans = rem + ans;
//         n = n/10;
//     }
//     n = 0;
//     if(ans>9)
//     {   while(ans>0)
//         {

//         rem = ans%10;
//         n = rem + n;
//         ans = ans/10;
//         }
//         cout<<n;
//     }
//     else{
//         cout<<ans;
//     }
//     return 0;
// }




// Better version : 


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a value fo n : ";
    cin>>n;
    int sum;
    while (n>9)
    {
        sum = 0;
        while(n>0)
        {
            sum = sum +(n%10);
            n = n/10;
        }
        n = sum;
    }
    cout<<"The final single digit sum : " <<n;
    
    return 0;
}

