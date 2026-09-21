//write a cpp programe to store the roll numbers of 5 students and display all the roll numbers enter by user, save this programe as a student_display.cpp

#include <iostream>
using namespace std;

int roll[5];

for(int i = 0; i<5; i++){
    cout<<"enter the roll no of student"<<i<<endl;
    cin>>roll[i];
}


for(int i = 0; i<5; i++){
    cout<<roll[i]<<endl;
}




