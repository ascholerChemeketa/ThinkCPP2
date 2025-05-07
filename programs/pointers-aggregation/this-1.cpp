#include <iostream>
using namespace std;

class Point {
public:
    Point(double x, double y) {
        m_x = x;
        m_y = y;
    }
    double getX() {
        cout << "  In getX this is:" << this << endl;
        return m_x;
    }

private:
    double m_x;
    double m_y;
};

int main() {
    Point p1(0, 0);
    cout << "p1 address: " << &p1 << endl;
    Point p2(3, 4);
    cout << "p2 address: " << &p2 << endl;

    cout << "Calling p1.getX()..." << endl;
    p1.getX();
    cout << "Calling p2.getX()..." << endl;
    p2.getX();
};