#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    string firstName;
    string lastName;
    string program;
    string academicYear;

    // Get student's details
    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    cin.ignore();

    cout << "Enter your study program: ";
    getline(cin, program);

    cout << "Enter the academic year (e.g. 2027/2028): ";
    cin >> academicYear;

    // Get the current date automatically
    time_t currentTime = time(0);
    tm *currentDate = localtime(&currentTime);

    int day = currentDate->tm_mday;
    int month = currentDate->tm_mon + 1;
    int year = currentDate->tm_year + 1900;

    // Display the acceptance letter
    cout << "\n\n";
    cout << "============================================================\n";
    cout << "                    MAKERERE UNIVERSITY\n";
    cout << "                   ACCEPTANCE LETTER\n";
    cout << "============================================================\n\n";

    cout << "Date: " << day << "/" << month << "/" << year << "\n\n";

    cout << "To: " << firstName << " " << lastName << ",\n\n";

    cout << "Dear " << firstName << ",\n\n";

    cout << "CONGRATULATIONS!\n\n";

    cout << "I am pleased to inform you that the Makerere University\n";
    cout << "Admissions Board has approved your application for admission\n";
    cout << "to the " << academicYear << " academic year.\n\n";

    cout << "You have been offered a place for the following course:\n\n";

    cout << "PROGRAM: " << program << "\n\n";

    cout << "As a student of Makerere University, you will be part of a\n";
    cout << "historic institution dedicated to academic excellence and\n";
    cout << "innovation. Please ensure that you report to the Academic\n";
    cout << "Registrar's office with your original academic documents\n";
    cout << "for verification during the orientation week.\n\n";

    cout << "We look forward to welcoming you to the Makerere University.\n\n";

    cout << "Yours sincerely,\n\n\n";

    cout << "John Doe\n";
    cout << "Registrar\n";

    cout << "\n============================================================\n";

    return 0;
}