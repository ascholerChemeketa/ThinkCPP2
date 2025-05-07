#include <iostream>
import Point;

using namespace std;

class Circle {
public:
    Circle(double radius, double x, double y) {
        m_radius = radius;
        m_center = Point(x, y);
    }

    bool contains(const Point& p) const {
        double distance = m_center.distanceTo(p);
        if (distance <= m_radius) {
            return true; // Point is inside or on the circle
        } else {
            return false; // Point is outside the circle
        }
    }

private:
    double m_radius;
    Point m_center;
};

int main() {
    Circle c1(5.0, 2, 1);

    cout << "Is the point (3.2, 2.0) inside the circle? " << endl;
    Point p1(3.2, 2.0);
    cout << c1.contains(p1) << endl; // Should print 1 (true)

    cout << "Is the point (7, 1) inside the circle? " << endl;
    // Recall that Point(7, 1) makes a nameless Point object
    cout << c1.contains(Point(7, 1)) << endl; // Should print 1 (true)

    cout << "Is the point (12, 12) inside the circle? " << endl;
    cout << c1.contains(Point(12.0, 12.0)) << endl; // Should print 0 (false)
}