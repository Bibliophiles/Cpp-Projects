// Question 18
// The transportation fare along a certain road in Ghana is calculated using the following sliding
// scale:
//  A fixed amount of ¢2000.00 is paid by all passengers
//  The first 10 kilometers is free
// The next 30 kilometers attract ¢100.00 each
// The next 110 kilometers attract ¢175.00 each
// Any excess kilometer over 150 kilometers attract ¢50.00.
// Your problem is to write a computer solution that would allow a distance to be entered, compute
// the required fare and then return as output the expected fare and the distance traveled.

#include <iostream>
using namespace std;

int main(){
    //Declaring and initializing variables
    double distance, fare = 2000, new_Distance;

    //Taking input
    cout << "Enter Distance in kilometers: ";
    cin >> distance;

    //Assigning distance to newDistance
    new_Distance = distance;

    if (distance <= 10)
        fare = 2000;
    else if (distance <= 40){
        distance -= 10;
        fare += distance * 100;
    }
    else if (distance <= 150){
        distance -= 40;
        fare += (30 * 100) + distance * 175;
    }
    else
        fare += (30 * 100) + (100 * 175) + 50 * (distance - 150);

    //Displaying outputs
    cout << "Displaying traveled: " << new_Distance << " km" << endl;
    cout << "Expected fare: Ghc " << fare << endl;

    return 0;
}