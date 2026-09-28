#include<iostream>
using namespace std;
int main()
{
    int row,column,total = 0;
    cout<<"Enter the row : ";
    cin>>row;
    cout<<"Enter the column : ";
    cin>>column;
    // Calculating the no. of moves in lower rigt direction. : 
    // the Bishoip will stop on 8th column either 8th row. (note).
    if(8 - row > 8 - column){
        total = total + 8 - column;
    }
    else{
        total = total + 8 - row;
    }
    // Now calulating towards lower left. : 
    // for this side the bishop will stop on the 8th row either 1 column.
    // so mininum in (8-A)and (B - 1) will the no. of steps.
    if(8 - row> column - 1){
        total = total + (column -1);
    }
    else{
        total = total + (8-row);
    }
    // Now calculatin towards upper right side. : 
    // either the Bishiop will stop on the 1st row or the 8th column.
    if(row - 1>8 - column){
        total = total +(8 - column);
    }
    else{
        total = total + (row - 1);
    }
    // Now calculation towards upper left side. : 
    // either the Bishop will stop on the 1st column or the 1st column.
    if(row - 1>column -1){
        total = total+(column - 1);
    }
    else{
        total = total + (row -1);
    }
    cout<<"The total no. of moves in the all direction is : "<<total;
    return 0;
}


// Expert's approach : 

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int row, column;
//     cin >> row >> column;
//     int total = min(8 - row, 8 - column)      // ↘
//               + min(8 - row, column - 1)      // ↙
//               + min(row - 1, 8 - column)      // ↗
//               + min(row - 1, column - 1);      // ↖

//     cout << "Total moves: " << total;

//     return 0;
// }

