///////// Student Info/////////
//
//           Your Name: Oscar Stommendal
//      Your NTU Email: N2402294F@e.ntu.edu.sg
//
//
//

#include <iostream>
using namespace std;

// Function to get a valid integer input
int getValidInt() {

    int iD;
    cin >> iD;

    return iD;
}

// Function to get a valid float input
float getValidFloat() {

    float mark;
    cin >> mark;

    return mark;
}

int main() {
    char name[50];  // Student name
    int studentID;  // Student ID
    float mathMark; // Math mark

    while (true) {
        // Get student name
        cout << "Enter student name (or enter '#' to exit): ";
        cin.ignore();
        cin.getline(name, 50);

        // Check if user wants to exit
        if (strcmp(name, "#") == 0) {
            break;
        }

        // Get student ID
        cout << "Enter student ID (integer): ";
        studentID = getValidInt();

        // Get math mark
        cout << "Enter math mark (float): ";
        mathMark = getValidFloat();

        // Display student information
        cout << "\nStudent Information:\n";
        cout << "Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Math Mark: " << mathMark << endl;
        cout << "-------------------------\n";
    }

    cout << "Program exited successfully." << endl;
    return 0;
}
