// Question 10
// If p and q are both primes and q=p+2, then the pair p,q are called twin primes. For example, 5,7
// are twin primes. Devise a computer solution to list all twin primes that are less than a positive
// integer n.

#include <iostream>
using namespace std;
bool isPrime(int n);

int main(){
    //Declaring variable
    int number;

    //Taking input
    cout << "Enter the number: ";
    cin >> number;

    for (int i = 2; i <= number; i++){
        if (isPrime(i) && isPrime(i + 2))
            cout << i << " and " << i + 2 << " are twin primes " << endl;
    }

    return 0;
}

bool isPrime(int n){
    int numOfFactors = 0;
    for ( int i = 1; i <= n; i++){
        if (n % i ==0)
            numOfFactors++;
    }
    return numOfFactors == 2;
}