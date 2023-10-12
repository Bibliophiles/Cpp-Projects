// Question 9
// (a) A prime number may be defined as any number that has only two factors, the digit 1 and
// the number itself. Using this definition, write down a computer solution that can allow a number
// to entered as input and output a message indicating whether or not the given number is a prime.
// Do not assume any pre-defined function.

#include <iostream>
using namespace std;

int main(){
     //Declaring and initializing variables
     int Number, numOfFactors = 0;
     cout << "Enter a number: ";
     cin >> Number;

     //Checking for number of factors
     for (int i = 1; i <= Number; i++){
        if(Number % i == 0)  
            numOfFactors++;
     }

     //Checking for prime numbers
     if (numOfFactors == 2)
        cout << Number << " is a prime number " << endl;
    else
        cout << Number << " is not a prime number " << endl;

    return 0; 
}