// CSC 134
// M3T3 - RNG
// BRENDA SUSTAITA
// 2/21/2024

#include <iostream>
#include <cstdlib> // for rand ()
#include <ctime> // for time ()
using namespace std;

int main (){
    cout << "Welcome to the craps table!" << endl;
	// set up variables
	int roll;
	int die1, die2;
    int seed;

    // set random seed
    //cout << "Enter lucky number: ";
    //cin >> seed;
    srand(time(0)); // our lucky # is the time in msec

	// roll dice
	//cout << "What did you roll? ";
	//cin >> roll;
    die1 = (rand() % 6) + 1; // 1 to 6
    die2 = (rand() % 6) + 1;
    roll = die1 + die2;
	
	// get the results
	cout << "Your roll was: " << die1 <<", " << die2 << ", totaling " << roll << endl;
    if (roll == 7 || roll == 11) {
        cout << "You win!" << endl;
    }
    else if (roll == 2 || roll ==3 || roll ==12) {
        cout << "You lose..." << endl;
    }
    else {
        cout << "Your point is: " << roll << endl;
        // cout << "TODO: roll the point" << endl;
    }
    return 0;
}