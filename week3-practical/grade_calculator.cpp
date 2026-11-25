#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    int students;
    int countA = 0, countB = 0, countC = 0;
    int countD = 0, countF = 0;

    cout << "===== GRADE CALCULATOR =====" << endl;

    cout << "How many students? ";
    cin >> students;

    if (students <= 0) {
        cout << "Invalid number of students!" << endl;
        return 1;
    }

    for (int i = 1; i <= students; i++) {

        string name;
        double score;
        char grade;
        char modifier = ' ';

        cout << "\nStudent " << i << endl;

        cout << "Enter student name: ";
        cin >> ws;
        getline(cin, name);

        cout << "Enter percentage score (0-100): ";
        cin >> score;

        // Validate score
        if (cin.fail()) {
            cout << "Invalid input!" << endl;
            return 1;
        }

        if (score < 0 || score > 100) {
            cout << "Invalid score! Must be between 0 and 100." << endl;
            continue;
        }

        // Determine base grade
        if (score >= 90) {
            grade = 'A';
            countA++;
        }
        else if (score >= 80) {
            grade = 'B';
            countB++;
        }
        else if (score >= 70) {
            grade = 'C';
            countC++;
        }
        else if (score >= 60) {
            grade = 'D';
            countD++;
        }
        else {
            grade = 'F';
            countF++;
        }

        // Determine plus/minus modifier
        if (grade != 'F') {

            int lastDigit = (int)score % 10;

            if (grade == 'A') {
                if (score >= 97)
                    modifier = '+';
                else if (score < 93)
                    modifier = '-';
            }
            else if (grade == 'B' || grade == 'C' || grade == 'D') {
                if (lastDigit >= 7)
                    modifier = '+';
                else if (lastDigit <= 3)
                    modifier = '-';
            }
        }

        // Display student result
        cout << "\n----- STUDENT RESULT -----" << endl;

        cout << "Name: " << name << endl;
        cout << "Score: " << fixed << setprecision(1) << score << "%" << endl;

        cout << "Grade: " << grade;
        if (modifier != ' ')
            cout << modifier;
        cout << endl;

        // Personalized messages
        switch (grade) {

            case 'A':
                cout << "Excellent work!" << endl;
                break;

            case 'B':
                cout << "Good job!" << endl;
                break;

            case 'C':
                cout << "Satisfactory." << endl;
                break;

            case 'D':
                cout << "Needs improvement." << endl;
                break;

            case 'F':
                cout << "Please seek help." << endl;
                break;
        }
    }

    // Final class summary
    cout << "\n===== CLASS SUMMARY =====" << endl;

    cout << "A Grades: " << countA << endl;
    cout << "B Grades: " << countB << endl;
    cout << "C Grades: " << countC << endl;
    cout << "D Grades: " << countD << endl;
    cout << "F Grades: " << countF << endl;

    cout << "\nTotal students graded: "
         << countA + countB + countC + countD + countF << endl;

    cout << "\n===== END OF PROGRAM =====" << endl;

    return 0;
}