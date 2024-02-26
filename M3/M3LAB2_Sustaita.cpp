// CSC 134
// M3LAB2- Number to Letter Grade Conversion
// BRENDA SUSTAITA
// 02/26/2024  

#include <iostream>
using namespace std;

int main (){
    // declare variables
    int grade;
    // ask user to input grade
    cout << "What is your numerical grade?"<< "\t";
    cin >> grade;
    // add "if" statements for grades
    if (grade >= 90){
        cout << "Your grade is an A." << endl;
    }
    else if (grade >= 80 && grade < 90){
        cout << "Your grade is a B." << endl;
    }
    else if (grade >= 70 && grade < 80){
        cout << "Your grade is a C." << endl;
    }
    else if (grade >= 60 && grade < 70){
        cout << "Your grade is a D." << endl;
    }
    else if (grade <= 59){
        cout << "Your grade is an F." << endl;
    }
    return 0;
}