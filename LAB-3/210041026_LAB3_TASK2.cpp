#include <bits/stdc++.h>
using namespace std ;

#define endl '\n'

class Book {
private:
    string title;
    string author;
    int year;
    int current_year=2023;
    bool status;


public:
    void setDetails(string ttle, string authr, int y) {
        title = ttle ;
        author = authr ;
        year = y ;
        cout << "Setting the details of the book: " << endl;

    }
    void checkOut() {
        status = false;
    }
    bool checkIn() {
        status = true;
    }
    void displayStatus () {
        cout << "Book Title: " << title << endl;
        cout << "Book Author: " << author << endl;
        cout << "Published year: " << year << endl;
        if (!status) cout << "Currently Unavailable" << endl;
        else if (status) cout << "Currrenty Available" << endl;
        }
    bool isClassic () {
        if (current_year-year> 50) return true;
        return false;
    }

};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    Book b1;
    b1.checkIn() ;

    b1.setDetails("1984","George Orwell", 1950);

    b1.displayStatus();
    b1.isClassic();
    b1.checkOut();
    b1.displayStatus();

    return 0;
}
