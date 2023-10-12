// Question 11
// Without using the division (/) devise a computer solution that can be used to m goes into n as
// well as the remainder. The values for m and n will be read as inputs.

#include <iostream>
using namespace std;

int main(){
    //Declaring and initializing variables
    double n, m, remainder, newN;
    int counter = 0;

    cout << "n must be GREATER than m" << endl;
    cout << endl;

    //Taking inputs from the user
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter m: ";
    cin >> m;

    //Assigning n to newN
    newN = n;

    while (n - m >= 0){
        n -= m;
        counter++;
    }
    remainder = n;

    //Displaying output
    cout << endl;
    cout << m << " goes into " << newN << " = " << counter << " times." << endl;
    cout << "Remainder: " << remainder;

    return 0;
}