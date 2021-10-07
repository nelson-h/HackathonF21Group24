/*
 * Class: CSCI 341
 * Group: Hackathon 24
 * Concept: Ideal Gas law calculator
 * Date: 08 OCT 2021
 *
 * Summary: A simple ideal gas law mole calculator. The calculator will take in P,V, and T
 *  in the ideal gas law formula and using the constant R will print the number of moles.
 *  The program will then ask the user if they would like to do another and will loop or end
 *  based on response.
 *
 * */

#include <iostream>
using namespace std;
void calculate();

//main is just used to call the calculation function
int main() {
    calculate();
    return 0;
}

//Calculate will run the actual calculations and return nothing. The program uses I/O only
void calculate() {
//    Declaration of variables
    float P, V, n, R, T;
//    R is always 0.08 so it can be assigned here
    R = 0.08;
//    Loop will run until return is called - do-while would also work here
    while (true){
//        Format is prompt one variable and store
//      This program does make the assumption that the user will correctly enter a float
//      in the correct units. There is no validation code for inputs.
        cout << "What is your P in atm? Type your float and press enter: " << endl;
        cin >> P;
        cout << "What is your V in L? Type your float and press enter: " << endl;
        cin >> V;
        cout << "What is your T in K? Type your float and press enter: " << endl;
        cin >> T;
//        Once all the variables have been collected the equaiton is ran PV = nRT solved for n
        n = (P * V) / (R * T);
//        Printing out the result
        cout << "Your n is : " << n << endl;

//        This bit will store a response and check for y or n; on y the loop continues, on n a message is displayed
//          and the loop is broken returning to main
        cout << "Would you like to recalculate? (y/n): ";
        char response;
        cin >> response;
        if(response == 'n'){
            cout << "Thank you, goodbye!" << endl;
            return;
        }
    };
};
