// CSC 134
// M3T1T2- Area
// Brenda Sustaita
// 02/14/2024

#include <iostream>
using namespace std;

int main (){
    // declare variables
    int lengthOne, widthOne, lengthTwo, widthTwo;
    int areaOne, areaTwo;
    // ask for width, length of first rectangle?
    cout << "What is the length?    ";
    cin >> lengthOne;
    cout << "What is the width?     ";
    cin >> widthOne;
    // Calculate the areas
    areaOne = lengthOne * widthOne;
    // Print the areas
    // display the calculation
    cout << "The area of the first rectangle is     " << areaOne << endl;
    //separate rectangles
    cout << "------------------------------------------------------------" << endl;
    // Repeat formulas and complete second rectangle
    cout << "What is the length of the second rectangle?   ";
    cin >> lengthTwo;
    cout << "What is the width of the second rectangle?     ";
    cin >> widthTwo;
    // Calculate the areas
    areaTwo = lengthTwo * widthTwo;
    // display the calculation
    cout << "The area of the second rectangle is     " << areaTwo << endl;
    // calculate which rectangle is bigger
    if (areaOne > areaTwo){
        cout << "Rectangle One is bigger than rectangle Two." << endl;
    }
    if (areaTwo > areaOne){
        cout << "Rectangle Two is bigger than rectangle One." << endl;

    }
    if (areaOne == areaTwo){
        cout << "The area of rectangle One and rectangle Two are equal." << endl;
    }
    return 0;
}