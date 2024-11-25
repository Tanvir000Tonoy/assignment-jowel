#include <iostream>
using namespace std;

// Function to calculate grade points based on marks
double calculateGradePoint(double marks) {
    if (marks >= 90) {
        return 4.00;
    } else if (marks >= 85) {
        return 3.75;
    } else if (marks >= 80) {
        return 3.50;
    } else if (marks >= 75) {
        return 3.25;
    } else if (marks >= 70) {
        return 3.00;
    } else if (marks >= 65) {
        return 2.75;
    } else if (marks >= 60) {
        return 2.50;
    } else if (marks >= 50) {
        return 2.25;
    } else {
        return 0.00;
    }
}

int main() {
    int numCourses;
    const int creditPerCourse = 3;
    
    // Input the number of courses
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    // Declare arrays to store marks and grade points
    double marks[numCourses];
    double gradePoints[numCourses];
    
    // Input marks for each course
    for (int i = 0; i < numCourses; i++) {
        cout << "Enter marks for course " << (i + 1) << ": ";
        cin >> marks[i];
    }

    // Calculate grade points for each course
    for (int i = 0; i < numCourses; i++) {
        gradePoints[i] = calculateGradePoint(marks[i]);
    }

    // Calculate total grade points
    double totalGradePoints = 0;
    for (int i = 0; i < numCourses; i++) {
        totalGradePoints += gradePoints[i] * creditPerCourse;
    }

    int totalCredits = numCourses * creditPerCourse;
    double cgpa = totalGradePoints / totalCredits;

    // Output the CGPA
    cout << "Total CGPA: " << cgpa << endl;

    return 0;
}