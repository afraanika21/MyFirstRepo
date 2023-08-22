#include <bits/stdc++.h>
using namespace std ;

#define endl '\n'

class Student {
private:
    string firstname;
    string lastname;
    int id;
    int dob;
    string course;
    int marks;
    int current_year = 2023;
public:
    void setDetails(string fname, string lname, int std_id, int year, string crse, int mrks) {
        firstname = fname;
        lastname = lname;
        id = std_id;
        dob = year;
        course =crse;
        marks = mrks ;
    }
    int displayAge() {
        return current_year-dob;
    }
    float displayGPA() {
        if(marks <30 ) return 1.0;
        if(marks>30 && marks <40) return 1.5;
        if(marks>40 && marks < 50) return 2.0;
        if(marks > 50 && marks <60) return 2.5 ;
        if(marks > 60 && marks <70) return 3.0 ;
        if(marks > 70 && marks <80) return 3.5 ;
        if(marks > 80 && marks <=100) return 4.0 ;
    }
    void willGraduate() {
        //float gpa=displayGPA();
        if(marks > 40) cout << "Will graduate" << endl ;
        else  cout<< "won't graduate" << endl;
    }
    float updatedGPA() {
        marks = (marks * 0.1) + marks;
        cout << "Updated GPA: " << displayGPA() << endl;
    }
    void printTranscript() {
        cout << firstname << " " << lastname << endl;
        cout << "ID: " << id << endl;
        cout << "Age: " << displayAge() << endl;
        updatedGPA();
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    Student s1;

    string fname, lname, crse;
    int std_id,year,mrks;
    cout << "Student details: " << endl;
    cout.flush();
    cout << "first name: " ;
    cout.flush();
    cin >> fname;
    cout << "last name: " ;
    cout.flush();
    cin >> lname ;
    cout << "id: " ;
    cout.flush();
    cin >> std_id;
    cout <<"birth year: " ;
    cout.flush();
    cin >> year;
    cout << "course: " ;
    cout.flush();
    cin >> crse;
    cout << "marks: ";
    cout.flush();
    cin >> mrks;

    s1.setDetails(fname,lname,std_id,year,crse,mrks);
    s1. willGraduate();
    s1.updatedGPA();
    s1.printTranscript();

}
