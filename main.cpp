// Fady Fahmy
// Recursive Function CS Project


#include <iostream>
#include <string>

using namespace std;

int main() {
    // Step 1: Declare variables
    int numStudents;

    // Step 2: Prompt user for the number of students
    cout << "Enter the number of students: ";
    cin >> numStudents;

    string names[numStudents];
    float scores[numStudents];
    char grades[numStudents];

    // Step 3: Input student names and test scores
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter name for student " << i+1 << ": ";
        cin >> names[i];
        cout << "Enter test score for " << names[i] << ": ";
        cin >> scores[i];

        // Assign grades based on test scores
        if (scores[i] >= 90)
            grades[i] = 'A';
        else if (scores[i] >= 80)
            grades[i] = 'B';
        else if (scores[i] >= 70)
            grades[i] = 'C';
        else if (scores[i] >= 60)
            grades[i] = 'D';
        else grades[i] = 'F';
    }
    // Step 4: Display grade roster
    cout << "\n================ Grade Roster ================\n";
    cout << "Name \t\tTest Score \tGrade \n";
    cout << "==== \t\t========== \t=====\n";
    for (int i = 0; i < numStudents; i++) {
        cout << names[i] << "\t\t   " << scores[i] << "\t\t  " << grades[i] << "\n";
    }
    // Step 5: Calculate descriptive statistics
    float sum = 0;
    float minScore = scores[0];
    float maxScore = scores[0];

    for (int i = 0; i < numStudents; i++) {
        sum += scores[i];
        if (scores[i] < minScore)  // calculate the minimum score
            minScore = scores[i];
        if (scores[i] > maxScore)  // calculate the maximum score
            maxScore = scores[i];
    }

    float average = sum / numStudents; // calculate the average score

    // Step 6: Display class statistics
    cout << "\n============= Class Statistics ================\n";
    cout << "Number of students in the class: " << numStudents << "\n";
    cout << "Class Average: " << average << "\n";
    cout << "Maximum Test Score: " << maxScore << "\n";
    cout << "Minimum Test Score: " << minScore << "\n";

    return 0;
}
