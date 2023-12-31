// Question 15
// The RUSSIAN PEASANT method is one way of finding the product of any two given numbers.
// Given that A and B are two positive numbers, A is divided by 2 and its decimal part truncated,
// while B is also multiplied by 2. This process of dividing and multiplying is repeated until A
// attains a value of 1. The product of the two numbers is then the sum of all B values whose
// corresponding A values ( including the initial value of A) are odd. As a typical example, let A and B
// be 21 and 10 respectively then the division and the multiplication can be written down as follows:
// Current value of A Current value of B
// 21 10
// 10 20
// 5 40
// 2 80
// 1 160
// In the above, the bolded lines show when the value of A is odd. The product of the two numbers
// will therefore be the sum of the bolded B values, which is 210 (10+40+160). Write a computer
// solution that accepts as input two positive integers and then return the product of the two
// numbers using the above method with an appropriate caption. Hint use the modulus operator
// ( %) where necessary.

#include <iostream>
using namespace std;

int main () {
    //Declaring and initializing variables
    int A, B, Product = 0;

    //Taking inputs
    cout << "Enter A: ";
    cin >> A;
    cout << "Enter B: ";
    cin >> B;

    while (A != 0){
        if (A % 2 != 0){
            Product += B;
        }
        A /= 2;
        B *= 2;
    }

    //Displaying output
    cout << endl;
    cout << "Product of A and B: " << Product;

    return 0;
}