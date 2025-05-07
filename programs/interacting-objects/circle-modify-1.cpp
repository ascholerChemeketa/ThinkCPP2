#include <iostream>
//import the Point class
import Point;

using namespace std;

class Circle {
public:
    Circle(double radius, double x, double y) {
        m_radius = radius;
        m_center = Point(x, y);
    }

    void setRadius(double radius) {
        // Can directly set the radius
        m_radius = radius;
    }

    void setX(double x) {
        // Need to use the Point class to set the x-coordinate of the center
        m_center.setX(x);
    }

    void setY(double y) {
      // Need to use the Point class to set the y-coordinate of the center
        m_center.setY(y);
    }

    double getRadius() const {
        return m_radius;
    }

    double getX() const {
        return m_center.getX();
    }

    double getY() const {
        return m_center.getY();
    }

private:
    double m_radius;
    Point m_center;
};

int main() {
    Circle c1(5.0, 2, 1);
    c1.setRadius(10.0);
    c1.setX(3.0);
    c1.setY(-4.0);
    cout << c1.getRadius() << endl;
    cout << c1.getX() << endl;
    cout << c1.getY() << endl;
}