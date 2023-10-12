// Question 8a
// Write a computer solution that accepts as input an integer value and then output the sum of the
// digits in the number

#include <iostream>
using namespace std;

int main(){
    //Declaring and initializing variables
    int Number, sumDigit = 0;

    //Taking inputs
    cout << "Enter a number: ";
    cin >> Number;

    while (Number != 0){
        sumDigit += Number % 10;
        Number /= 10;
    }
    
    //Displaying output
    cout << "Sum of Digits: " << sumDigit;

    return 0;
}
