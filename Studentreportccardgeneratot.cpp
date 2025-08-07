#include <iostream>
using namespace std;


// This program is a simple report card generator


int main(){
    cout << "Welcome to the Student Report Card Generator!" << endl;


    cout<< "Please enter the student's name: ";
    string studentname;
    cin >> studentname;

     cout<< "Please enter the student's Rollnumber: ";
    int rollnumber;
    cin >> rollnumber;
    cout<< "Please enter the student's marks in sub1: ";
    int mark1;
    cin >> mark1;
    cout<< "Please enter the student's marks in sub2: ";
    int mark2;
    cin >> mark2;
    cout<< "Please enter the student's marks in sub3: ";
    int mark3;
    cin >> mark3;


    if(studentname.empty()){
        cout << "Please enter a valid name." << endl;
    } else if(rollnumber <= 0){
        cout << "Please enter a valid roll number." << endl;
    } else if(mark1 < 0 || mark2 < 0 || mark3 < 0){
        cout << "Marks cannot be negative." << endl;
    } else {
        int total = mark1 + mark2 + mark3;
        float average = total / 3.0;

        cout << "Report Card for " << studentname << endl;
        cout << "Roll Number: " << rollnumber << endl;
        cout << "Marks in Subject 1: " << mark1 << endl;
        cout << "Marks in Subject 2: " << mark2 << endl;
        cout << "Marks in Subject 3: " << mark3 << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;

        if(average >= 50){
            cout << "Result: Pass" << endl;
        } else {
            cout << "Result: Fail" << endl;
        }
    }
    

}