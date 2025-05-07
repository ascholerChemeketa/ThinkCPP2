class Point {
public:
    Point(double x, double y) {
        m_x = x;
        m_y = y;
    }

private:
    double m_x;
    double m_y;
};

class Circle {
public:
    Circle(double radius, double x, double y): m_center(x, y) {
        m_radius = radius;
    }

private:
    double m_radius;
    Point m_center;
};

int main() {
    Circle c1(5.0, 2, 1);
};