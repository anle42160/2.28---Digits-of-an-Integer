// 2.28.) Write a program that inputs a five-digit integer, separates the integer into its digits and prints them separated by three spaces each. [Hint: Use the integer division and remainder operators.] For example, if the user types in 42339, the program should print:
//         4  2  3  3  9
// Programmer: Anna Le

#include <iostream>
using namespace std;

int main()
{
    int userInput;

    //Assigning a value to userInput
    cout << "Five-Digit Integer: ";
    cin >> userInput;

    //Seperating the integers
    cout << "The Five-Digits Seperated ";
    //Printing the ten-thousands placed integer
    cout << userInput / 10000;
    //Printing the thousands placed integer
    cout << "   " << userInput % 10000 / 1000;
    //Printing the hundreads placed integer
    cout << "   " << userInput % 1000 / 100;
    //Printing the tens placed integer
    cout << "   " << userInput % 100 / 10;
    //Printing the ones placed integer
    cout << "   " << userInput % 10 << endl;
}
