// Question 5
// Devise a computer solution that reads in a positive integer n and then prints the sum of the first n
// even integers and the sum of the first n odd numbers.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Declaring and initializing variables
    int n, sumEven = 0, sumOdd = 0;

    //Taking inputs
    cout << "Enter the number: ";
    cin >> n;

    if (n > 0){
        sumEven = n * (n + 1);
        sumOdd = pow(n, 2);
    }

    //Displaying output
    cout << "The sum of the first " << n << " positive even integers is " << sumEven << endl;
    cout << "The sum of the first " << n << " positive odd integers is " << sumOdd << endl;

    return 0;
}