
// you are given an array of size n i.e 6 then you are given a condition that :
// the no. stored in an array is from 1 to n. 
// and no no. is repeated 
// but we can only print n - 1 numbers then we have to find the missing no. 

// CODE : for Missing no. 

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[] = {1,3,4,5,6,};
    for(int i = 0; i< 5; i++){
        if(arr[i] != i+1){
            cout<<"the no. is : "<<i+1<<"\n";
            break;
        }
    }
    return 0;
}
