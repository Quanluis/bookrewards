// Luis Garzon
// COP2000.0M2
// A simple program that calculate the number of points earned through books purchased. 

#include <iostream>
using namespace std;

int main (){

    // Variables

    int books;

    // Initial I/O

    cout << "How many books purchased this month?" << endl;
    cin >> books;

    // If statement that display a error if no numeric value is given

   if (cin.fail()){
       cout << "Invalid amount entered, try again!" << endl;
       return 0;
   }

    // Displays number of points based on user input

    if (books >= 4){
        cout << "You've earned " << 40 << " points!" << endl;
    } else if (books == 3) {
        cout  << "You've earned " << 30 << " points!" << endl;
    } else if (books == 2) {
        cout << "You've earned " << 15 << " points!" << endl;
    } else if (books == 1){
        cout << "You've earned " << 5 << " points!" << endl;
    } else if (books == 0){
        cout << "You've earned " << 0 << " points" << endl;
    } else if (books < 0){
        cout << "Enter a positive number." << endl;
    }
    
    system("pause");

    return 0;
}