#include <bits/stdc++.h>
using namespace std ;

#define endl '\n'

class Counter {
private :
    int count;
    int increment_step;
public :
    void setIncrementStep (int step_val) {
        increment_step = step_val;
    }
    int getCount () {
        return count;
    }
    void increment() {
        count += increment_step;
    }
    void resetCount () {
        count = 0;
    }
    bool isEven() {
        if(count%2) return false;
        return true;
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    Counter c1;
    c1.resetCount();
    c1.setIncrementStep(5);
    c1.increment();
    c1.increment();

    cout << "Current count: " << c1.getCount() << endl;

    if(c1.isEven()) cout << "Current count is even" <<endl;
    else cout << "Current count is not even" << endl;

    c1.resetCount() ;
    cout << "Resetting count: " << c1.getCount() << endl;

}

