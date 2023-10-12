// Question 7
// Assume that there is a function MID with the syntax, MID(s1,m,n) where s1 a string, and m and n
// are integers. 
// Given that MID(s1,m,n) is to return n middle characters of s1 starting from the character at position m, 
// write a computer solution that accepts as input a string of characters and
// output the number of times a particular character appears in the input. 

#include <iostream>
using namespace std;

int main(){
    //Declaring and initializing variables
    int lengthOfString, counter = 0;
    string theString;
    char theChar;

    //Taking inputs
    cout << "Enter the length of the string: ";
    cin >> lengthOfString;
    cout << "Enter the string: ";
    cin >> theString;
    cout << "Enter the character: ";
    cin >> theChar;

    for (int m = 0; m < lengthOfString; m++){
        if (theString[m] == theChar)
            counter++;
    }

    //Displaying output
    cout << endl;
    cout << theChar << " appears in " << theString << " " << counter;

    //Checking for grammar
    if (counter == 1)
        cout << " time";
    else
        cout << " times";

    return 0;
}