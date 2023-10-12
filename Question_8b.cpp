//  as well as the number of digits it has with appropriate captions.

#include <iostream>
using namespace std;

int main(){
    //Declaring and initializing variables
    int number;

    //Taking input
    cout << "Enter a number: ";
    cin >> number;

    if(number == 0)
        cout << "Number is invalid";
    else{
        if(number < 0)
            number *= -1;

        int counter = 0;
        while (number != 0){
            number /= 10;
            counter++;
        }

        //Displaying output
        cout << "The number has " << counter << " digits.";
    }

    return 0;
}