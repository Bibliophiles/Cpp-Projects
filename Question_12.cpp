// Question 12
// Brofoyedur is a small town in the Central Region of Ghana. It has been estimated that the
// population of this town is about 2000 people and that the population is increasing at a rate of
// 15% every six months. You are required to write a computer solution to determine the number of
// years that it would take for the population size to exceed two million for the village to become a
// city.

#include <iostream>
using namespace std;

int main (){
    //Declaring and initializing variables
    double years, months = 0, population = 2000;

    while (population <= 2000000){
        population += (0.15 * population);
        months += 6;
    }

    //Converting months to years
    years = months / 12;

    //Displaying the output
    cout << "It takes " << years << " years for the town to become a city " << endl;

    return 0;
}