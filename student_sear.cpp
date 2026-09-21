//write a cpp program of 5 students in an array and search the given roll number, display "student found" if the roll number is present, otherwise display "student not found". Save this program as student_search.cpp

#include <iostream>
using namespace std;

int main() {
    int roll[5];
    int search;
    bool found = false;

    for(int i = 0; i < 5; i++){
        cout << "Enter the roll number of student " << i + 1 << ": ";
        cin >> roll[i];
    }

    cout << "Enter the roll number to search: ";
    cin >> search;

    for(int i = 0; i < 5; i++){
        if(roll[i] == search){
            found = true;
            break;
        }
    }

    if(found){
        cout << "Student found" << endl;
    } else {
        cout << "Student not found" << endl;
    }

    return 0;
}
