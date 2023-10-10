// Question 2
// Devise a computer solution that interchanges the values of two variables, X and Y. The original
// values of X and Y will be entered via the keyboard. Test your solution with initial values of X
// and Y being 10 and 20 respectively. At the end of the test, do you have X and Y to be 20 and 10
// respectively? If yes then your computer solution may be correct.

#include <iostream>
using namespace std;

int main(){
    //Declaring variables
    int x, y, temp;

    //Taking inputs 
    cout << " X: ";
    cin >> x;
    cout << " Y: ";
    cin >> y;

    temp = x;
    x = y;
    y = temp;

    cout << endl;
    cout << " X: " << x << endl;
    cout << " Y " << y << endl;

    return 0;
}