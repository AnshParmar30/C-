// #include<iostream>
// using namespace std;
// void arm(int n){
//     int ans = 0, rem, mul,final = 0, x = n;
//     while(x>0){
//         ans = ans + 1;
//         x = x/10;
//     }
//     x = n;
//     while(x>0){
//         rem = x%10;
//         mul = rem;
//         for(int i = 1;i< ans;i++){
//             rem = rem*mul;
//         }
//         final = rem + final;
//         x = x/10;
//     }
//     if(final == n){
//         cout<<"Armstrong no. ";
//     }
//     else{
//         cout<<"Not an Armstrong no. ";
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value : ";
//     cin>>n;
//     arm(n);
//     return 0;
// }


// Inder's question 
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, Hun;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     int x = n;
//     Hun = x/100;
//     cout<<"The notes of 100 are : "<<Hun<<"\n";
//     x = x%100;
//     if(x>= 50){
//         x = x -50;
//         cout<<"The no. of 50 are : "<<"1"<<"\n";
//     }
//         cout<<"The no. of 1's are : "<<x<<"\n";
//     return 0;
// }


