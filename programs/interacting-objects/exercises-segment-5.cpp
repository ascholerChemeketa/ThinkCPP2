#include <iostream>
#include <cmath>

class Point {
public:
    Point(double x, double y) {
        m_x = x;
        m_y = y;
    }
    double getX() const { return m_x; }
    double getY() const { return m_y; }
private:
    double m_x, m_y;
};

using namespace std;

class Segment {
public:

