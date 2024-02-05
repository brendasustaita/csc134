/* 
CSC 134
M2 LAB1 - CRATE SALES
BRENDA SUSTAITA
02/5/2024
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    //constants for cost and amount charged 
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIT_FOOT = 0.50;
    // declare variables
    double length, width;
    double area;
    double height;
    double volume;
    double cost;
    double charge;
    double profit; 
    // ask for user input
    cout << "What is the length?   ";
    cin >> length;
    cout << "What is the width?    ";
    cin >> width;
    cout << "What is the height?   ";
    cin >> height;

    // calculate the crate's volume, cost to produce 
    // the charge of the customer and its profit
    volume = length * width * height; 
    cost = volume * COST_PER_CUBIC_FOOT; 
    charge = volume * CHARGE_PER_CUBIT_FOOT; 
    profit = charge - cost;


    // print the answer
    cout << fixed << setprecision(2);

    cout << "The volume of the crate is: ";
    cout << volume << " cubic feet. \n";
    cout << "Cost to build: $ " << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    return 0;
}
