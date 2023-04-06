


#include <iostream>
#include <iomanip>   //to use the function setw

using namespace std;


int main()
{
    
    for (int i = 5; i >= 1; i--)  //for loop to produce a shape of 5 rows

    {
        for (int j = 1; j <= i; j++)  //for loop to produce a shape of columns equal to decreasing i of the first loop 
            if (j == i) {   //condition to print only one number per row when column index is equal to row number
                cout << j;
            }
            else cout << " ";   //priting space other than the column index
        cout << '\n';  //new line after every iritation

    }
    
    
    cout << '\n';  //new line before the new shape

    for (int i = 0; i < 7; i++) {   //producing a shape of 7 rows
        for (int j = 0; j <= i; j++) {    //producing a shape of number of columns equal to the current row
            switch (i) {  //switch statement to produce the shape based on the idex of column
            //different cases of the shape 
            //using setw to print the output with a specicif spacing
            case 0:
                cout << i << setw(2);
                break;
            case 1:
                cout << '#' << setw(2);
                break;
            case 2:
                cout << '$' << setw(2);
                break;
            case 3:
                cout << i << setw(2);
                break;
            case 4:
                cout << '#' << setw(2);
                break;
            case 5:
                cout << '$' << setw(2);
                break;
            case 6:
                cout << i << setw(2);
                break;
        }
      
         }
        cout << '\n'; //new line after every iritation
    }
    cout << '\n';  //mew line before the other shape


    int x = 1;   //initializing a variable to 1 to start the shape with

    for (int i = 0; i < 4; i++) {  //for loop to produce 4 rows
        for (int j = 0; j < 3; j++) {  //for loop to produce 3 columns
            cout << x << setw(3); //using setw for spacing of numbers of one or two digits
            x += 2;  //logical operation to produce odd numbers starting with 1
        }
        cout << '\n'; //new line for every row
    }

    







    return 0;
}

