// Question 1
// Employees of JB and Sons Consultants Ltd are paid on an hourly basis at the end of every week.
// If an employee works for not more than 40 hours a week, it is considered regular and Overtime
// for hours worked in excess of 40. Regular hours are paid at 500 cedis and 550 cedis per hour for
// males and females respectively while the overtime rate is one and half times the regular rate per
// hour for the different sexes. All employees are to pay 15% of their gross pay as Income Tax,
// 2.5% as National Health Contribution Levy, 1% as District Tax. Employees who have more than
// three children are to pay 10 and 20 cedis per child in excess of three towards Educational Fund
// For All for males and females respectively. Devise a computer solution that can be used to
// calculate the Net Pay of employees.

#include <iostream>
using namespace std;
int main(){

    double OverTimeRateMal, OverTimeRateFem, RegularRateMal = 500, RegularRateFem = 550, HoursWorked, GrossPay;
    int NumOfChildren;
    char Gender;

    //Declaring Constants
    OverTimeRateMal = 1.5 * RegularRateMal;
    OverTimeRateFem = 1.5 * RegularRateFem;

    //Taking Inputs
    cout << "Number of Hours Worked: ";
    cin >> HoursWorked;
    cout << "Gender; M or F: ";
    cin >> Gender;
    cout << "Number of children: ";
    cin >> NumOfChildren;

    //Computing for the Gross pay
    if (Gender == 'M'){
        if(HoursWorked <= 40)
            GrossPay = RegularRateMal * HoursWorked;
        else
            GrossPay = RegularRateMal * 40 + OverTimeRateMal * (HoursWorked - 40);
    }
    else{
        if(HoursWorked <= 40)
            GrossPay = RegularRateFem * HoursWorked;
        else
            GrossPay = RegularRateFem * 40 + OverTimeRateFem * (HoursWorked - 40);
    }

    //Computing for Taxes
    double IncomeTax = 0.15 * GrossPay, NHILevy = 0.025 * GrossPay, DistrictTax = 0.01 * GrossPay, EduFund;

    //Computing for Educational Fund
    if(NumOfChildren > 3){
        if(Gender =='M')
            EduFund = 10 * (NumOfChildren -3);
        else
            EduFund = 20 * (NumOfChildren - 3);
    }
    else
        EduFund = 0;

   //Computing for NET PAY
   double NetPay = GrossPay - (IncomeTax + NHILevy + DistrictTax + EduFund);

   //Displaying Output
   cout << "---------------------------------"<< endl;
   cout << "Gross Pay: Ghc " << GrossPay << endl;
   cout << "Income Tax: Ghc " << IncomeTax << endl;
   cout << "NHI Levy: Ghc " << NHILevy << endl;
   cout << "EduFund: Ghc " << EduFund << endl;
   cout << endl;
   cout << "---------NET PAY------------"<<endl;
   cout << " Ghc " << NetPay;

   return 0;
}