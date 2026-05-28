#include <iostream>
using namespace std;

int main() {

    // Declaring variables
    string studentName;
    double theoryMarks, practicalMarks, averageScore;

    // asking user for input
    cout << "Enter student name=";
    cin >> studentName;

    cout << "Enter theory test marks= ";
    cin >> theoryMarks;

    cout << "Enter practical test marks= ";
    cin >> practicalMarks;

   // Calculating average score
    averageScore = (theoryMarks + practicalMarks) / 2;
   // Displaying results
    cout << "\n========== DRIVING TEST RESULTS ==========" << endl;
    cout << "Student Name      : " << studentName << endl;
    cout << "Theory Marks      : " << theoryMarks << endl;
    cout << "Practical Marks   : " << practicalMarks << endl;
    cout << "Average Score     : " << averageScore << endl;

// Determining pass or fail
    if (averageScore >= 50) {
        cout << "Result             : PASS" << endl;
    }
    else {
        cout << "Result             : FAIL" << endl;
    }

    cout << "==========================================" << endl;

    return 0;
}
