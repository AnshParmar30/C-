
// Roatate the array by 1 : 

#include<iostream>
using namespace std;
 int main(int argc, char const *argv[])
 {
    int n = 5,i = 0;
    int arr[] = {1,2,3,4,5,6};
    int temp = arr[5];
    while(n>0){
        arr[n] = arr[n-1];
        n--;
    }
    arr[0] = temp;
    for(int j =0; j< 6;j++){
        cout<<arr[j];
    }
    return 0;
 }
 