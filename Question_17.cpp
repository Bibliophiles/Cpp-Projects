// Question 17
// Pay As You Study University of Ghana charges 1000 cedis for each semester hour of credit,
// 500000 cedis for regular room (R) and 1000000 cedis for an air-conditioned room (A) and
// 500000 cedis for use of academic facilities. All students pay 200000 for matriculation and
// graduating students pay 300000 cedis for degree certificate. Devise a computer solution that
// computes fees that must be paid by each student. A warning message should be displayed if a
// student is taking more than 21 credit hours and less than 15 credit hours per semester. The input
// per student should be students' id number (4 digits), room type (A or R), credit hours and
// graduating status (Y or N).

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Declaring variables
    double fee, facilityFee, graduationFee, hourlyCharge;
    int TnumStudents, creditHours, ID_Num;
    char roomType, graduatingStatus;

    //Taking inputs
    cout << "Enter the total number of students: ";
    cin >> TnumStudents;

    for (int i = 1; i <= TnumStudents; i++){
        cout << "Student " << i << endl;

        cout << "Enter your 4 DIGITS students' ID: ";
        cin >> ID_Num;

        while(ID_Num < 1000 || ID_Num > 9999){
            cout << "ID Number must be 4 Digits long: ";
            cin >> ID_Num;
        }

        cout << "Enter Room Type; R or A: ";
        cin >> roomType;
        cout << "Enter number of credit hours: ";
        cin >> creditHours;
        cout << "Enter graduating status; Y or N: ";
        cin >> graduatingStatus;

        if (creditHours >= 15 && creditHours <= 21){
            hourlyCharge = 1000 * creditHours;

            if (roomType == 'R')
                facilityFee = 500000 + 500000;
            else
                facilityFee = 1000000 + 500000;

            if (graduatingStatus == 'N')
                graduationFee = 200000;
            else
                graduationFee = 200000 + 300000;

            fee = hourlyCharge + facilityFee + graduationFee;
            cout << "Student ID: " << ID_Num << endl;
            cout << "Fees: Ghc " << setprecision(10) << fee << endl;
            cout << fixed;
        }
        else
            cout << "WARNING: Invalid Credit Hours" << endl;
        cout << endl;
    }

    return 0;
}