// Question 6
// Write down a computer solution that can be used to count the number of times a particular digit
// appears in an (integer) input. Hint you may assume that there is an operator % that returns the
// remainder when one integer is divided by another and has the syntax a %b where a and b are
// integer constants.

#include <iostream>
using namespace std;

int main(){
    //Declaring and initializing variables
    int number, digit, newNumber, lastDigit, counter = 0;

    //Taking inputs
    cout << "Enter the number: ";
    cin >> number;

    //Assigning number to new number
    newNumber = number;
    cout << "Enter the digit: ";
    cin >> digit;

    while (number != 0){
        lastDigit = number % 10;
        if (lastDigit == digit)
            counter++;
        number /= 10;
    }

    //Displaying output
    cout << digit << " appears in " << newNumber << " " << counter;

    //Checking for grammar
    if(counter == 1)
        cout << " time";
    else
        cout << " times";

    return 0;
}