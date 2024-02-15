// CSC 134
// M2T1 - Apple Sales
// Brenda Sustaita
// 1/29/24

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    // add variables
    string name;
    int numApples;
    double price;
    double total;
    // greet customer
    cout << "Hello! Welcome to Sustaita Apple Farm!" << endl;
    // ask customer for name
    cout << "What is your name:" << "\t\t\t"; 
    cin >> name;
    // ask how many items they would like
    cout << "How many apples would you like to buy?" << "\t";
    cin >> numApples;
    // calculate price
    cout << fixed << setprecision(2);
    cout << "How much does each apple cost?" << "\t\t$";
    cin >> price;

    total = numApples * price;
    // give total
    cout << "The total price for all of the apples is: $" << total << "." << endl;
    return 0;
}