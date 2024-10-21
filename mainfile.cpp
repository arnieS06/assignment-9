#include <iostream>
#include <iomanip>

using namespace std;

// this function checks whether an applicant
// is eligbile for a job
// using comparison logic between input
int main() {
    char citizen;
    char bachelorDeg;
    char workExp;

    cout << "Are you a US citizen? (y/n): "; 
    cin >> citizen;

    cout << "Do you have a bachelor's degree? (y/n): ";
    cin >> bachelorDeg;

    cout << "Do you have two years of work experience? (y/n): ";
    cin >> workExp;

    if (citizen == 'y') {
        if (bachelorDeg == 'y' || workExp == 'y') {
            cout << "\nYou are eligible for a job." << endl;
        }

        else {
            cout << "Sorry, you are not eligible for a job." << endl;

        }
    }

    else {
        cout << "Sorry, you are not eligible for a job." << endl;
    }

    return 0;
}
