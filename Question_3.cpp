// Question 3
// Devise a computer solution that can be used to find the position of the last occurrence of a given
// number from a given set of input. You may 'dry run' your solution with the following test data.
// 0 2 4 2 5 6 8 2 6 3 4 5 6 3 2 2 7 8 9 1 2 2 1
// Let 2 be the number that we want to find the position of its last occurrence (this should be 22)

#include <iostream>
using namespace std;

int main(){
    //Declaring and initializing variables
    int setLength, Number, lastOcurrence = 0, set;

    //Taking inputs
    cout << "Enter the length of the set: ";
    cin >> setLength;
    cout << "Enter the number: " ;
    cin >> Number;
    cout << endl;

    for(int i = 0; i < setLength; i++){
        cout << "Enter the set of numbers: ";
        cin >> set;
        if(Number == set)
            lastOcurrence = i + 1;
    }

    //Displaying output
    cout << endl;
    cout << "Position of Last Ocurrence: " << lastOcurrence;

    return 0;
}
