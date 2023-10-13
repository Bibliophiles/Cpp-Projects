// Question 13
// The square root of a number N can be approximated by a repeated calculation using the
// following formula.
// NewGuess = 0.5(LastGuess + N /LastGuess)
// where NewGuess is the next guess and LastGuess the last guess. The calculation of a NewGuess
// should be terminated when the absolute value of the difference between the NewGuess and the
// LastGuess is about 0.0000001. Write down a computer solution for the above formula. You may
// use the function ABS(x) or '|x|' to obtain the absolute value of x.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Declaring variables
    double newGuess, lastGuess, n;

    //Taking inputs
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the guess: ";
    cin >> lastGuess;

    newGuess = lastGuess;

    do{
        lastGuess = newGuess;
        newGuess = 0.5 * (lastGuess + n /lastGuess);
    } while (fabs(newGuess - lastGuess) > pow(10, -7));

    //Displaying output
    cout << "The square root of " << n << " is " << newGuess << endl;

    return 0;
}