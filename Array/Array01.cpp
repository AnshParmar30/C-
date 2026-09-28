
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {

    // To print the array. : 

    // int arr[] = {1,3,3,54,65,3};
    // for(int i = 0; i< 6; i++){
    // cout<<arr[i]<<" ";
    // }

    // To find a specific element. :

//     int arr[] = {1,3,4,6,4,3,6,7}, i;
//     for( i = 0; i<7;i++){
//         if(arr[i]==7){
//             break;
//         }
//     }
//       cout<<"Found at index :"<<i<<" finally"<<"\n";

//     return 0;
// }


 // Find the smallest no. in the array.

// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int arr[]= {11,2,34,4,5,1,32};
//     int ans = INT_MAX;
    
//     for(int i = 0; i<7; i++){
//     if(arr[i]<ans){
//         ans = arr[i];
//     }
// }
//     cout<<ans;
//     return 0;
// }

// Find the biggest no. in the array.

// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int arr[]= {11,2,34,4,5,1,32};
//     int ans = INT_MIN;
//     for(int i = 0; i<7; i++){
//         if(arr[i]>ans){
//             ans = arr[i];
//         }
//     }
//     cout<<"The biggest no. is : "<<ans;
//     return 0;
// }


// Reverse of an array.
// using swap function : 

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int arr[6] ={1,3,5,6,7,13};
//     int start = 0, end = 5;
//     while (start<end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     };
//     for(int i = 0 ; i<6;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//  Second Maximum no. inside an array : 

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[] = {1,3,5,3,223,343,5,23};
    int ans = INT_MIN;
    for(int i = 0; i<8; i++){
        if(arr[i]> ans){
            ans = arr[i];
        }
    }
        cout<<"The 1st largest is : "<<ans<<"\n";
    int second = INT_MIN;
    for(int j = 0; j<8;j++){
        if(arr[j]==ans){
            continue;
        }
        else if (arr[j]>second)
        {
            second = arr[j];
        }      
    }
    cout<<"The 2nd largest is : "<<second<<"\n";
    return 0;
}
